#include "../0 cs50 library/cs50.h"
#include <stdio.h>

int main(void)
{
  int n;
  while (true)
  {
    int n = get_int("What's n? ");
    if (n < 0)
    {
      continue;
    }
    else
    {
      break;
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}