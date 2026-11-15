#include "../0 cs50 library/cs50.h"
#include <stdio.h>

// Prototype
int get_n(void);
void meow(int n);

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    int n = get_n();
    meow(n);
  }
}

int get_n(void)
{
  int n;
  do
  {
    n = get_int("What's n?");
  } while (n < 0);
}

void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}