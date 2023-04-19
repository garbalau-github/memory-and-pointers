#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Whenever we use C, we keep track and maintain a bunch of pieces of information,
  // and on the way to do it, is to create variables.
  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  // RAM is the memory your computer going to use when it is running programs.
  // This variable values are stored on our computer, in physical memory somewhere.

  // We give descriptive names to variables, so we can print the out and reference them,
  // so the way we can access the value is by refering to its name.

  // But behind the scenes, C refers to a memory address where this value is stored,
  // inside of our physical memory.

  // %p (pointer) to access physical memory address
  printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);
  // age: 0x16fa23098
  // gpa: 0x16fa23090
  // grade: 0x16fa2308f

  // We can use variable names, but C has to access them by memory address,
  // this is why C is awesome and abstracts away the referencing

  return 0;
}