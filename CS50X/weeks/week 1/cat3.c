#include "../0 cs50 library/cs50.h"
#include <stdio.h>

// Prototype
void meow(int n);

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    meow(3);
  }
}

void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}