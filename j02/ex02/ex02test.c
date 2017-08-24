#include <stdio.h>
void ft_print_alphabet(void);
int main()
{
  char ch;

  for(ch='z'; ch>='a'; ch++)
    {
      printf("%c", ch);
    }
  printf ("\n");
  return 0;
}
