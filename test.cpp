#include<stdio.h>

int main() {
  int a;
  int* p;
  a = 10;
  p = &a; //&a = address of a
  printf("a = %d\n",p);
  *p = 12;  // dereferencing
  printf("a = %d\n",*p);
  printf("%d\n",&a);
  return 0;
}
