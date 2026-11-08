#include "../0 cs50 library/cs50.h"
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    n = get_int("what's n? ");
  }
  while (n < 0);

  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}