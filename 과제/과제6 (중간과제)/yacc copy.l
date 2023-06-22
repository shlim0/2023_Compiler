     // 강의 슬라이드를 참고하여 코드를 작성하였으며, 그 외 부분은 교재 부록을 활용하였음.

%{
     // 64bit 컴퓨터에서 포인터와 int간 사이즈를 위해 long으로 선언
     #define YYSTYPE_IS_DECLARED 1
     typedef long YYSTYPE;

     #include <stdio.h>
     #include <stdlib.h>
     #include "type.h"   // 노드로 관리하기 위해 추가
     #include "func.h"   // makeNode(), setDeclaratorListSpecifier() 등의 함수 정의가 있는 헤더
      
     // 기존 int line_no = 1;을 부록 내용대로 변경함
     // 부록4에서 비롯한 func.h에 해당 변수들이 int로 선언되어 있음
     extern int line_no, syntax_err, current_level;

     // 교재 부록3 참고하여 작성
	extern A_NODE *root;
	extern A_ID *current_id;
     // 교재 부록3에는 *int_type밖에 수록되어 있지 않으나 그 외 타입들이 부록4에 수록되어 있어 다른 타입들도 작성
	extern A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;

     int yyerror(char *s);
     int yylex();
%}

%token IDENTIFIER TYPE_IDENTIFIER FLOAT_CONSTANT INTEGER_CONSTANT
%token CHARACTER_CONSTANT STRING_LITERAL PLUS MINUS PLUSPLUS
%token MINUSMINUS BAR AMP BARBAR AMPAMP ARROW
%token SEMICOLON LSS GTR LEQ GEQ EQL NEQ DOTDOTDOT
%token LP RP LB RB LR RR PERIOD COMMA EXCL STAR SLASH PERCENT ASSIGN
%token COLON AUTO_SYM STATIC_SYM TYPEDEF_SYM
%token STRUCT_SYM ENUM_SYM SIZEOF_SYM UNION_SYM
%token IF_SYM ELSE_SYM WHILE_SYM DO_SYM FOR_SYM CONTINUE_SYM
%token BREAK_SYM RETURN_SYM SWITCH_SYM CASE_SYM DEFAULT_SYM

%start program

%%
program
     : translate_unit {root = makeNode(N_PROGRAM, 0, $1, 0); checkForwardReference();}
     ;

translate_unit
     : external_declaration {$$ = $1;}
     | translate_unit external_declaration {$$ = linkDeclaratorList($1, $2);}
     ;

external_declaration
     : function_definition {$$ = $1;}
     | declaration {$$ = $1;}
     ;

function_definition
	: declaration_specifiers declarator {$$=setFunctionDeclaratorSpecifier($2,$1);} compound_statement{$$=setFunctionDeclaratorBody($3,$4);}
	| declarator {$$=setFunctionDeclaratorSpecifier($1,makeSpecifier(int_type,0));} compound_statement{$$=setFunctionDeclaratorBody($2,$3);}
	;

declaration
     // 슬라이드 내용 상, ': declaration_specifiers SEMICOLON' 를 삭제
     // : declaration_specifiers SEMICOLON
     // 슬라이드 내용 상, 기존 'init_declarator_list' 에서 'init_declarator_list_opt' 로 변경
     : declaration_specifiers init_declarator_list_opt SEMICOLON {$$ = setDeclaratorListSpecifier($2, $1);}
     ;

declaration_specifiers
     : type_specifier {$$ = makeSpecifier($1, 0);}
     | storage_class_specifier {$$ = makeSpecifier(0, $1);}
     | type_specifier declaration_specifiers {$$ = updateSpecifier($2, $1, 0);}
     | storage_class_specifier declaration_specifiers {$$ = updateSpecifier($2, 0, $1);}
     ;

storage_class_specifier
     : AUTO_SYM {$$ = S_AUTO;};
     | STATIC_SYM {$$ = S_STATIC;};
     | TYPEDEF_SYM {$$ = S_TYPEDEF;};
     ;

     // 62 line에서 'init_declarator_list_opt' 사용을 위해 추가
init_declarator_list_opt
     // 5-1강 슬라이드에서 '$$ = 0;'으로 되어 있으나 이러면 struct에 대한 불완전 참조 결과가 이상하게 나옴.
     // 따라서, 부록3 코드대로 수정함
     // c.f.
     // : /* empty */  {$$ = 0;}
     : {$$=makeDummyIdentifier();}
     | init_declarator_list {$$ = $1;}

init_declarator_list
     : init_declarator {$$ = $1;}
     | init_declarator_list COMMA init_declarator {$$ = linkDeclaratorList($1, $3);}
     ;

init_declarator
     : declarator {$$ = $1;}
     | declarator ASSIGN initializer {$$ = setDeclaratorInit($1, $3);}
     ;

type_specifier
     : struct_specifier {$$ = $1;}
     | enum_specifier {$$ = $1;}
     | TYPE_IDENTIFIER {$$ = $1;}
     ;

     // 5-1강 1-13 슬라이드 내용
     /*
struct_specifier
     : struct_or_union IDENTIFIER {$$ = makeIdentifier($2);} LR {$$ = current_id; current_level++;} struct_declaration_list RR {checkForwardReference(); current_level--; current_id = $5;}
     | struct_or_union LR {$$ = current_id;current_level++;} struct_declaration_list RR {checkForwardReference(); current_level--; current_id = $3;}
     | struct_or_union IDENTIFIER 
     ;
     */

     // 부록3 참고하여 'struct_specifer' 에서 'struct_type_specifier' 로 이름 변경 -> byacc: w - the symbol struct_specifier is undefined 에러 메시지로 인해 원래대로 수정
struct_specifier
	: struct_or_union IDENTIFIER
	{$$ = setTypeStructOrEnumIdentifier($1, $2, ID_STRUCT);}    // ID_STRUCT를 대입. makeIdentifier() 기능을 함(내부에서 makeIdentifier()를 호출한다)
	LR {$$ = current_id; current_level++;} struct_declaration_list RR
	{checkForwardReference(); $$ = setTypeField($3, $6); current_level--; current_id = $5;}
	| struct_or_union {$$ = makeType($1);} LR {$$ = current_id; current_level++;}
	struct_declaration_list RR {checkForwardReference(); $$ = setTypeField($2, $5); current_level--; current_id = $4;}
	| struct_or_union IDENTIFIER {$$ = getTypeOfStructOrEnumRefIdentifier($1, $2, ID_STRUCT);}
	;

struct_or_union
     : STRUCT_SYM {$$ = T_STRUCT;}
     | UNION_SYM {$$ = T_UNION;}
     ;

struct_declaration_list
     : struct_declaration {$$ = $1;}
     | struct_declaration_list struct_declaration {$$ = linkDeclaratorList($1, $2);}
     ;

struct_declaration
     : type_specifier struct_declarator_list SEMICOLON {$$ = setStructDeclaratorListSpecifier($2, $1);}
     ;

struct_declarator_list
     : struct_declarator {$$ = $1;}
     // 5-1강 슬라이드에 $1, $2라고 되어있는 오타가 있음. (부록3에는 $1, $3으로 표기되어 있음)
     | struct_declarator_list COMMA struct_declarator {$$ = linkDeclaratorList($1, $3);}
     ;

struct_declarator
     : declarator {$$ = $1;}
     ;

     // 부록3 참고하여 'enum_specifier' 에서 'enum_type_specifier' 로 이름 변경 -> byacc: w - the symbol enum_specifier is undefined 에러 메시지로 인해 원래대로 수정
     /*
enum_specifier
     : ENUM_SYM IDENTIFIER {$$ = makeIdentifier($2);}LR enumerator_list RR
     | ENUM_SYM LR enumerator_list RR
     | ENUM_SYM IDENTIFIER
     ;
     */

enum_specifier
     : ENUM_SYM IDENTIFIER {$$ = setTypeStructOrEnumIdentifier(T_ENUM, $2, ID_ENUM);} // ID_ENUM를 대입. makeIdentifier() 기능을 함(내부에서 makeIdentifier()를 호출한다)
	  LR enumerator_list RR {$$ = setTypeField($3, $5);}
	| ENUM_SYM {$$ = makeType(T_ENUM);} LR enumerator_list RR {$$ = setTypeField($2, $4);}
	| ENUM_SYM IDENTIFIER {$$ = getTypeOfStructOrEnumRefIdentifier(T_ENUM, $2, ID_ENUM);}
	;

enumerator_list
     : enumerator {$$ = $1;}
     | enumerator_list COMMA enumerator {$$ = linkDeclaratorList($1, $3);}
     ;

     /*
enumerator
     : IDENTIFIER {$$ = makeIdentifier($1);}
     | IDENTIFIER {$$ = makeIdentifier($1);} ASSIGN constant_expression SEMICOLON
     ;
     */

enumerator
     : IDENTIFIER {$$ = setDeclaratorKind(makeIdentifier($1), ID_ENUM_LITERAL);}
     | IDENTIFIER {$$ = setDeclaratorKind(makeIdentifier($1), ID_ENUM_LITERAL);} ASSIGN expression {$$ = setDeclaratorInit($2, $4);}
     ;

declarator
     : pointer direct_declarator {$$ = setDeclaratorElementType($2, $1);}
     | direct_declarator {$$ = $1;}
     ;

pointer
     : STAR {$$ = makeType(T_POINTER);}
     | STAR pointer {$$ = setTypeElementType($2, makeType(T_POINTER));}
     ;

     /*
direct_declarator
     : IDENTIFIER {$$ = makeIdentifier($1);}
     | LP declarator RP
     | direct_declarator LB constant_expression_opt RB
     | direct_declarator LP {$$ = current_id; current_level++;} parameter_type_list_opt RP {checkForwardReference(); current_level--; current_id = $3;}
     ;
     */

direct_declarator
	: IDENTIFIER {$$ = makeIdentifier($1);}
	| LP declarator RP {$$ = $2;}
	| direct_declarator LB constant_expression_opt RB {$$ = setDeclaratorElementType($1, setTypeExpr(makeType(T_ARRAY), $3));}
	| direct_declarator LP {$$ = current_id; current_level++;} parameter_type_list_opt RP 
       {checkForwardReference(); current_id = $3; current_level--;
       $$ = setDeclaratorElementType($1, setTypeField(makeType(T_FUNC), $4));}
	;

constant_expression_opt
     : /* empty */
     | constant_expression
     ;

parameter_type_list_opt
	: /* empty */ {$$ = 0;}
	| parameter_type_list {$$ = $1;}
	;

parameter_type_list
	: parameter_list {$$ = $1;}
	| parameter_list COMMA DOTDOTDOT {$$ = linkDeclaratorList($1, setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
	;

parameter_list
	: parameter_declaration {$$ = $1;}
	| parameter_list COMMA parameter_declaration {$$ = linkDeclaratorList($1, $3);}
	;

parameter_declaration
	: declaration_specifiers declarator {$$ = setParameterDeclaratorSpecifier($2, $1);}
	| declaration_specifiers abstract_declarator_opt {$$ = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), $2), $1);}
	;

     // 5-1강 슬라이드에서 추가됨
abstract_declarator_opt
     : /* empty */ {$$ = 0;}
     | abstract_declarator {$$ = $1;}
     ;

abstract_declarator
	: direct_abstract_declarator {$$ = $1;}
	| pointer {$$ = makeType(T_POINTER);}
	| pointer direct_abstract_declarator {$$ = setTypeElementType($2, makeType(T_POINTER));}
	;

direct_abstract_declarator
	: LP abstract_declarator RP {$$ = $2;}
	| LB constant_expression_opt RB {$$ = setTypeExpr(makeType(T_ARRAY), $2);}
     | LP parameter_type_list_opt RP {$$ = setTypeExpr(makeType(T_FUNC), $2);}
	| direct_abstract_declarator LB constant_expression_opt RB {$$ = setTypeElementType($1, setTypeExpr(makeType(T_ARRAY), $3));}
	| direct_abstract_declarator LP parameter_type_list_opt RP {$$ = setTypeElementType($1, setTypeExpr(makeType(T_FUNC), $3));}
	;

initializer
     : constant_expression {$$ = makeNode(N_INIT_LIST_ONE, 0, $1, 0);}
     | LR initializer_list RR {$$ = $2;}
     ;

initializer_list
     : initializer {$$ = makeNode(N_INIT_LIST, $1, 0, makeNode(N_INIT_LIST_NIL, 0, 0, 0));}
     | initializer_list COMMA initializer {$$ = makeNodeList(N_INIT_LIST, $1, $3);}
     ;

statement
	: labeled_statement {$$ = $1;}
	| compound_statement {$$ = $1;}
	| expression_statement {$$ = $1;}
	| selection_statement {$$ = $1;}
	| iteration_statement {$$ = $1;}
	| jump_statement {$$ = $1;}
	;

labeled_statement
	: CASE_SYM constant_expression COLON statement {$$ = makeNode(N_STMT_LABEL_CASE, $2, 0, $4);}
	| DEFAULT_SYM COLON statement {$$ = makeNode(N_STMT_LABEL_DEFAULT, 0, $3, 0);}
     // | IDENTIFIER COLON statement : 슬라이드 내용 상, 삭제
	;

compound_statement
	: LR {$$ = current_id;current_level++;} declaration_list_opt statement_list_opt RR {checkForwardReference(); $$ = makeNode(N_STMT_COMPOUND, $3, 0, $4); current_id = $2; current_level--;}
	;

     // 5-2강 슬라이드에 따라, 'declaration_list_opt' 추가
declaration_list_opt
     : /* empty */
     | declaration_list  

declaration_list
	: declaration {$$ = $1;}
	| declaration_list declaration {$$ = linkDeclaratorList($1, $2);}
	;

     // 5-2강 슬라이드에 따라, 'statement_list_opt' 추가
statement_list_opt
	: /* empty */ {$$ = makeNode(N_STMT_LIST_NIL, 0, 0, 0);}
	| statement_list {$$ = $1;}
	;

statement_list
	: statement {$$ = makeNode(N_STMT_LIST, $1, 0, makeNode(N_STMT_LIST_NIL, 0, 0, 0));}
	| statement_list statement {$$ = makeNodeList(N_STMT_LIST, $1, $2);}
	;

expression_statement
	: SEMICOLON {$$ = makeNode(N_STMT_EMPTY, 0, 0, 0);}
	| expression SEMICOLON {$$ = makeNode(N_STMT_EXPRESSION, 0, $1, 0);}
	;

selection_statement
	: IF_SYM LP expression RP statement {$$ = makeNode(N_STMT_IF, $3, 0, $5);}
	| IF_SYM LP expression RP statement ELSE_SYM statement {$$ = makeNode(N_STMT_IF_ELSE, $3, $5, $7);}
	| SWITCH_SYM LP expression RP statement {$$ = makeNode(N_STMT_SWITCH, $3, 0, $5);}
	;

iteration_statement
	: WHILE_SYM LP expression RP statement {$$ = makeNode(N_STMT_WHILE, $3, 0, $5);}
	| DO_SYM statement WHILE_SYM LP expression RP SEMICOLON {$$ = makeNode(N_STMT_DO, $2, 0, $5);}
	| FOR_SYM LP for_expression RP statement {$$ = makeNode(N_STMT_FOR, $3, 0, $5);}
	;
     
     // 5-2강 슬라이드에 따라, 'for_expression' 추가
     /* 기존, iteration_statement에 
          | FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement
     로 되어있던 걸, for_expression으로 따로 분리함
     */

for_expression
     : expression_opt SEMICOLON expression_opt SEMICOLON expression_opt {$$ = makeNode(N_FOR_EXP, $1, $3, $5);}


expression_opt
	: /* empty */ {$$ = 0;}
	| expression {$$ = $1;}
	;

jump_statement
	: RETURN_SYM expression_opt SEMICOLON {$$ = makeNode(N_STMT_RETURN, 0, $2, 0);}
	| CONTINUE_SYM SEMICOLON {$$ = makeNode(N_STMT_CONTINUE, 0, 0, 0);}
	| BREAK_SYM SEMICOLON {$$ = makeNode(N_STMT_BREAK, 0, 0, 0);}
	;

primary_expression
     : IDENTIFIER {$$ = makeNode(N_EXP_IDENT, 0, getIdentifierDeclared($1), 0);}
     | INTEGER_CONSTANT {$$ = makeNode(N_EXP_INT_CONST, 0, $1, 0);}
	| FLOAT_CONSTANT {$$ = makeNode(N_EXP_FLOAT_CONST, 0, $1, 0);}
	| CHARACTER_CONSTANT{$$ = makeNode(N_EXP_CHAR_CONST, 0, $1, 0);}
	| STRING_LITERAL {$$ = makeNode(N_EXP_STRING_LITERAL, 0, $1 ,0);}
	| LP expression RP {$$ = $2;}
	;

postfix_expression
	: primary_expression {$$ = $1;}
	| postfix_expression LB expression RB {$$ = makeNode(N_EXP_ARRAY, $1, 0, $3);}
	| postfix_expression LP arg_expression_list_opt RP {$$ = makeNode(N_EXP_FUNCTION_CALL, $1, 0, $3);}
	| postfix_expression PERIOD IDENTIFIER {$$ = makeNode(N_EXP_STRUCT, $1, 0, $3);}
	| postfix_expression ARROW IDENTIFIER {$$ = makeNode(N_EXP_ARROW, $1, 0, $3);}
	| postfix_expression PLUSPLUS {$$ = makeNode(N_EXP_POST_INC, 0, $1, 0);}
	| postfix_expression MINUSMINUS {$$ = makeNode(N_EXP_POST_DEC, 0, $1, 0);}
	;

arg_expression_list_opt
	: /* empty */ {$$ = makeNode(N_ARG_LIST_NIL, 0, 0, 0);}
	| arg_expression_list {$$ = $1;}
	;

arg_expression_list
	: assignment_expression {$$ = makeNode(N_ARG_LIST, $1, 0, makeNode(N_ARG_LIST_NIL, 0, 0, 0));}
	| arg_expression_list COMMA assignment_expression {$$ = makeNodeList(N_ARG_LIST, $1, $3);}
	;

unary_expression
	: postfix_expression {$$ = $1;}
	| PLUSPLUS unary_expression {$$ = makeNode(N_EXP_PRE_INC, 0, $2, 0);}
	| MINUSMINUS unary_expression {$$ = makeNode(N_EXP_PRE_DEC, 0, $2, 0);}
	| AMP cast_expression {$$ = makeNode(N_EXP_AMP, 0, $2, 0);}
	| STAR cast_expression {$$ = makeNode(N_EXP_STAR, 0, $2, 0);}
	| EXCL cast_expression {$$ = makeNode(N_EXP_NOT, 0, $2, 0);}
	| MINUS cast_expression {$$ = makeNode(N_EXP_MINUS, 0, $2, 0);}
	| PLUS cast_expression {$$ = makeNode(N_EXP_PLUS, 0, $2, 0);}
	| SIZEOF_SYM unary_expression{$$ = makeNode(N_EXP_SIZE_EXP, 0, $2, 0);}
	| SIZEOF_SYM LP type_name RP {$$ = makeNode(N_EXP_SIZE_TYPE, 0, $3, 0);}
	;

cast_expression
	: unary_expression {$$ = $1;}
	| LP type_name RP cast_expression {$$ = makeNode(N_EXP_CAST, $2, 0, $4);}
	;

type_name
	: declaration_specifiers abstract_declarator_opt {$$ = setTypeNameSpecifier($2, $1);}
	;

multiplicative_expression
	: cast_expression {$$ = $1;}
	| multiplicative_expression STAR cast_expression {$$ = makeNode(N_EXP_MUL, $1, 0, $3);}
	| multiplicative_expression SLASH cast_expression {$$ =  makeNode(N_EXP_DIV, $1, 0, $3);}
	| multiplicative_expression PERCENT cast_expression {$$ =  makeNode(N_EXP_MOD, $1, 0, $3);}
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression PLUS multiplicative_expression {$$ = makeNode(N_EXP_ADD, $1, 0, $3);}
	| additive_expression MINUS multiplicative_expression {$$ = makeNode(N_EXP_SUB, $1, 0, $3);}
	;

     // 부록3에는 addtive_exp -> shift_exp -> relational_exp로 되어있으나,
     // 5-2강 슬라이드에는 addtive_exp -> relational_exp 순으로 되어있어, 강의 슬라이드대로 하였음.
     // c.f. 
     /*
     shift_expression
          : additive_expression {$$  =  $1;}
          ;
     */

relational_expression
	: additive_expression {$$ = $1;}
	| relational_expression LSS additive_expression {$$ = makeNode(N_EXP_LSS, $1, 0, $3);}
	| relational_expression GTR additive_expression {$$ = makeNode(N_EXP_GTR, $1, 0, $3);}
	| relational_expression LEQ additive_expression {$$ = makeNode(N_EXP_LEQ, $1, 0, $3);}
	| relational_expression GEQ additive_expression {$$ = makeNode(N_EXP_GEQ, $1, 0, $3);}
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQL relational_expression {$$ = makeNode(N_EXP_EQL, $1, 0, $3);}
	| equality_expression NEQ relational_expression {$$ = makeNode(N_EXP_NEQ, $1, 0, $3);}
	;

     // 부록3에는 equality_exp -> bitwise_[and -> xor -> or] -> logical_and_exp 로 되어있으나,
     // 5-2강 슬라이드에는 equality_exp -> logical_and_exp 순으로 되어있어, 강의 슬라이드대로 하였음.
     // c.f. 
     /*
     bitwise_and_expression
          : equality_expression {$$ = $1;}
          ;

     bitwise_xor_expression
          : bitwise_and_expression {$$ = $1;}
     	;
          
     bitwise_or_expression
	     : bitwise_xor_expression {$$ = $1;}
	     ;
     */

logical_and_expression
	: equality_expression {$$ = $1;}
	| logical_and_expression AMPAMP equality_expression {$$ = makeNode(N_EXP_AND, $1, 0, $3);}

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression BARBAR logical_and_expression {$$ = makeNode(N_EXP_OR, $1, 0, $3);}
	;

     /* 기존 코드 : logical_or_exp -> assignment_exp -> assignment_exp -> exp -> constant_exp
assignment_expression
     : logical_or_expression
     | unary_expression ASSIGN assignment_expression
     ;
     
expression
     : assignment_expression
     ;

constant_expression
     : expression
     ;
     */

     // 5-2강 슬라이드
     /*
constant_expression
     : logical_or_expression {$$ = $1;}

expression
     : constant_expression {$$ = $1;}
     | unary_expression ASSIGN expression {$$ = makeNode(N_EXP_ASSIGN, $1, 0, $3);}
     */

     // 부록3에는 logical_or_exp -> conditional_exp -> assignment_exp -> comma_exp -> exp -> constant_exp로 되어있으나,
     // 5-2강 슬라이드에는 logical_or_exp -> constant_exp -> exp순으로 되어있어, 강의 슬라이드대로 하였으며, exp와 constant_exp의 순서가 바뀌어도 상관없다.
     // -> byacc: w - the symbol assignment_expression is undefined 에러 메시지로 인해 부록3 내용대로 코드 수정함

     // 부록3 
conditional_expression
	: logical_or_expression {$$ = $1;}
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	| unary_expression ASSIGN assignment_expression
	{$$ = makeNode(N_EXP_ASSIGN, $1, 0, $3);}
	;

comma_expression
	: assignment_expression {$$ = $1;}
	;

expression
	: comma_expression {$$ = $1;}
	;

constant_expression
	: expression {$$ = $1;}
	;


%%
extern char *yytext;

int yyerror(char *s) 
{
     printf("line %d: %s near %s \n", line_no, s, yytext);
     exit(1);
}

// 해당 위치에 기존 main()이 존재했으나, main.c 파일로 따로 두었음.

int yywrap()
{
     return(1);
}