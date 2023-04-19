#include <stdio.h>
#include <stdlib.h>

int main()
{

  int age = 30;
  int *pAge = &age;

  // Dereferencing pointers is going to memory address of that pointer
  // and you grab a piece of information from there
  printf("%d/n", *pAge); // 30

  // Now it returns whatever was stored in a memory address to which pointer was pointing to

  return 0;
}