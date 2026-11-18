#include <stdio.h>
#include "../0 cs50 library/cs50.h"

int main(void)
{
  float x = get_int("What's x? ");
  float y = get_int("what's y "); 

  printf("%0.50f\n", x / y);
} 