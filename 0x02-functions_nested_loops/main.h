void print_putchar(void)
{
  printf("_putchar\n");
}

void print_alphabet(void)
{
  int i;
  for (i = 'a'; i <= 'z'; i++)
  {
    putchar(i);
  }
  putchar('\n');
}
