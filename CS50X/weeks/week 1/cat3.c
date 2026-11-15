#include "../0 cs50 library/cs50.h"
#include <stdio.h>

void meow(void)
{
  printf("meow\n");
}

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    meow();
  }
}