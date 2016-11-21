#include<stdio.h>

int main()
{
  int a = 10;
  int* p;
  p = &a;

  // Pointer arithmetic
  printf("%d\n",p);
  printf("%d\n",p + 1);
}
