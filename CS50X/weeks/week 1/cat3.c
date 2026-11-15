#include "../0 cs50 library/cs50.h"
#include <stdio.h>

// Prototype
void meow(int n);

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    int n = get_itn("What's n? ");
    meow(n);
  }
}

void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}