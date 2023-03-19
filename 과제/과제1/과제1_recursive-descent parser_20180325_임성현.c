#include <ctype.h> //isdigit()
#include <stdio.h>
#include <stdlib.h> //error 처리 시, exit()
int term();
int factor();
void error();

// NULL은 예악어이므로 NONE으로 대체함
enum { NONE, PLUS, STAR, NUMBER, LPAREN, RPAREN, END } token;

int number_value = 0; // 숫자 값

void get_token() {
  int ch = getchar();
  // 빈칸 입력 처리
  while (ch == ' ')
    ch = getchar();

  switch (ch) {
  case '+':
    printf("+");
    token = PLUS;
    break;
  case '*':
    printf("*");
    token = STAR;
    break;
  case '(':
    printf("(");
    token = LPAREN;
    break;
  case ')':
    printf(")");
    token = RPAREN;
    break;
  case '\n':
  case EOF:
    token = END;
    break;
  default:
    // if (ch <= '9' && ch >= '0')을 isdigit()로 구현
    if (isdigit(ch)) {
      printf("%c", ch);
      token = NUMBER;
      number_value = ch - '0'; // char 타입을 int로 변환
    } else {
      token = NONE;
    }
    break;
  }
}

int expression() {
  int result = term();
  while (token == PLUS) {
    get_token();
    result += term();
  }
  return result;
}

int term() {
  int result = factor();
  while (token == STAR) {
    get_token();
    // // 연산자 입력 후, 별도 숫자가 입력되지 않은 경우
    // // i.e. 123+ , 123* 등 의 경우
    // if (token == NONE) {
    //   error();
    // } else
    result *= factor();
  }
  return result;
}

int factor() {
  int result;
  if (token == NUMBER) {
    result = number_value;
    get_token();
    // 일의 자리, 십의 자리, 백의 자리, ... 등의 자리수를 계산
    // i.e. 234를 입력받은 경우.
    // i) main()에서 2 입력 받음, token = NUMBER;
    // ii) factor()에서 result = 2; token = NUMBER;
    // iii) while()에서 result = 2 * 10; result += 3;
    // iv) 결과적으로 result = 23;
    // v) 위 과정을 반복
    while (token == NUMBER) {
      result *= 10;
      result += number_value;
      get_token();
    }
  } else if (token == LPAREN) {
    get_token();
    result = expression();
    if (token == RPAREN)
      get_token();
    else
      error();
  } else
    error();

  return result;
}

int main() {
  printf("입력하는 수식 : ");
  get_token();
  int result = expression();
  if (token != END)
    error();
  else
    printf(" = %d\n", result); // 계산 결과 출력
}

void error() {
  printf("\n에러가 발생하였습니다.");
  exit(1);
}