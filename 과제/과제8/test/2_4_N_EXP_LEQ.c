void main() {

  if (10 <= 20)
    printf("LEQ : INT\n");
  if (10.1 <= 20)
    printf("LEQ : INT FLOAT\n");
  if (10.1 <= 20.2)
    printf("LEQ : FLOAT\n");

  if (20 <= 10)
    printf("LEQ : NOT INT\n");
  if (20.2 <= 10)
    printf("LEQ : NOT INT FLOAT\n");
  if (20.2 <= 10.1)
    printf("LEQ : NOT FLOAT\n");
}