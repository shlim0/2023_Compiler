void main() {

  if (20 >= 10)
    printf("GEQ : INT\n");
  if (20.2 >= 10)
    printf("GEQ : INT FLOAT\n");
  if (20.2 >= 10.1)
    printf("GEQ : FLOAT\n");

  if (10 >= 20)
    printf("GEQ : NOT INT\n");
  if (10.1 >= 20)
    printf("GEQ : NOT INT FLOAT\n");
  if (10.1 >= 20.2)
    printf("GEQ : NOT FLOAT\n");
}