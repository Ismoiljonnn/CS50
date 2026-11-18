#include "../0 cs50 library/cs50.h"
#include <stdio.h>

int main(void)
{
  char c = get_char("Do you agree? ");
  
  if (c == 'y' || c == 'Y')
  {
    printf("Agreed.\n");
  }
  else
  {
    printf("not agreed.\n");
  }
}