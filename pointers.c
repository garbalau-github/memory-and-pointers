#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  // Pointer is type of data that we can use in our programs

  // Pointer is basicly a memory address, that refers to physical address of the memory
  // in our computer where we store the value

  // & + name of the variable = returns a memory address

  printf("age's memory address: %p\n", &age);
  // age's memory address: 0x16f6430b8

  // Work with pointers
  // Pointer variable (stores a memory address of already defined variable, like 'age')

  // NOTE: We need the pointer data type of variable which memory address we want to store
  int *pAge = &age;
  double *pGpa = &gpa;
  char *pGrade = &grade;

  printf("%p\n", pAge);   // 0x16d9bf0b8
  printf("%p\n", pGpa);   // 0x16d9bf0b0
  printf("%p\n", pGrade); // 0x16d9bf0af

  return 0;
}