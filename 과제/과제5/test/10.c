int checkIdentifier(char *s) {
  char *table[] = {"int", "float", "char", "void"};

  int i;
  for (i = 0; i < sizeof(table) / sizeof(table[0]); i++) {
    if (strcmp(table[i], s) == 0)
      return (TYPE_IDENTIFIER);
  }

  return (IDENTIFIER);
}