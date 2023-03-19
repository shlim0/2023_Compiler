#include <ctype.h> //isdigit()
#include <stdio.h>
#include <stdlib.h> // exit()

int yyparse();
int yylex();
void shift();
void reduce();
void yyerror();
void lex_error();

#define NUMBER 256
#define STAR 258
#define RPAREN 260
#define EXPRESSION 0
#define FACTOR 2
#define PLUS 257
#define LPAREN 259
#define END 261
#define TERM 1
#define ACC 999

int action[12][6] = {
    {5, 0, 0, 4, 0, 0},     {0, 6, 0, 0, 0, ACC},   {0, -2, 7, 0, -2, -2},
    {0, -4, -4, 0, -4, -4}, {5, 0, 0, 4, 0, 0},     {0, -6, -6, 0, -6, -6},
    {5, 0, 0, 4, 0, 0},     {5, 0, 0, 4, 0, 0},     {0, 6, 0, 0, 11, 0},
    {0, -1, 7, 0, -1, -1},  {0, -3, -3, 0, -3, -3}, {0, -5, -5, 0, -5, -5}};

int go_to[12][3] = {{1, 2, 3}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
                    {8, 2, 3}, {0, 0, 0}, {0, 9, 3}, {0, 0, 10},
                    {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

int prod_left[7] = {0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_length[7] = {0, 3, 1, 3, 1, 3, 1};
int stack[1000];
int top = -1;
int sym;

// 1-35 슬라이드
char yytext[32];
int yylval;

int value[1000];

// 기존 코드에서 컴파일러 warning 으로 인해 void main()에서 int main()으로 변경
int main() {
  printf("입력하는 수식 : ");
  yyparse();
}

int yyparse() {
  int i;
  stack[++top] = 0; // initial state
  sym = yylex();
  do {
    i = action[stack[top]][sym - 256]; // get relation
    if (i == ACC)
      // printf("success !\n");
      printf("= %d\n", value[1]);
    else if (i > 0)
      shift(i); // shift
    else if (i < 0)
      reduce(-i); // reduce
    else
      yyerror();
  } while (i != ACC);
  return 0; // 기존 코드에서 컴파일러 warning 으로 인해 추가
}

void push(int i) { stack[++top] = i; }

void shift(int i) {
  push(i);
  value[top] = yylval;
  sym = yylex();
}

void reduce(int i) {
  int old_top;
  top -= prod_length[i];
  old_top = top;
  push(go_to[stack[old_top]][prod_left[i]]);

  switch (i) {
  case 1:
    value[top] = value[old_top + 1] + value[old_top + 3];
    break;
  case 2:
    value[top] = value[old_top + 1];
    break;
  case 3:
    value[top] = value[old_top + 1] * value[old_top + 3];
    break;
  case 4:
    value[top] = value[old_top + 1];
    break;
  case 5:
    value[top] = value[old_top + 2];
    break;
  case 6:
    value[top] = value[old_top + 1];
    break;
  default:
    yyerror("parsing table error");
    break;
  }
}

void yyerror() {
  printf("syntax error\n");
  exit(1);
}

// get_token()
int yylex() {
  static char ch = ' ';
  int i = 0;
  // 기존 코드 수정 : 모든 수식을 읽은 후 값을 처리하지 못해서 주석 처리
  // i.e. 1-34 슬라이드에서 s7 -> s5로 넘어가는 순간
  while (ch == ' ' || ch == '\t') // || ch == '\n')
    ch = getchar();
  if (isdigit(ch)) {
    yytext[i] = ch;
    ch = getchar();
    yylval = atoi(yytext);
    while (isdigit(ch)) {
      yytext[i] = ch;
      ch = getchar();
      yylval = yylval * 10 + atoi(yytext);
    };
    // 기존 코드 수정 : value[]에 값을 읽지 못하므로 주석 처리
    // yytext[i] = 0;
    // 기존 코드 수정 : 여러자리수 계산시 atoi() 위치 조정
    // yylval = atoi(yytext);
    return (NUMBER);
  } else if (ch == '+') {
    ch = getchar();
    return (PLUS);
  } else if (ch == '*') {
    ch = getchar();
    return (STAR);
  } else if (ch == '(') {
    ch = getchar();
    return (LPAREN);
  } else if (ch == ')') {
    ch = getchar();
    return (RPAREN);
    // 기존 코드 수정 : '\n' 입력시 더 이상 입력받지 않고 종료
  } else if (ch == EOF || ch == '\n')
    return (END);
  else
    lex_error();
  return 0; // 기존 코드에서 컴파일러 warning 으로 인해 추가
}

void lex_error() {
  printf("syntax error: invalid character\n");
  exit(1);
}
