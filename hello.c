#include <stdio.h>
#include <yellow.h>

int main()
{
  char *name = inString("What is your name?: ");
  printf("Hi there, %s", name);
  return 0;
}
