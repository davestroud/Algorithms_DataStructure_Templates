#include <cstdio>
#include <iostream>

using namespace std;

int factorial(int n);
int factorial2(int n);

int main(int argc, char **argv)
{
  cout << "The factorial(4) = " << factorial(4) << endl;
  cout << "The factorial2(4) = " << factorial2(4) << endl;

  cout << endl << "Press any key to continue ..." << endl;
  getchar();

  return 0;
}


// factorial - This function implements factorial without using recursion
int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++){
    result *= i;
  }
  return result;
}


// factorial2 - this function implements factorial using recursion

int factorial2(int n)
{
  if (n == 0) {
    return 1;
  } else {
      return n * factorial2(n - 1);
  }
}
