#include <iostream>

int Fib(int n);

int main(int argc, char const *argv[]) {
  std::cout << "The first 15 Fibonacci numbers are: " << std::endl;

  for (int i = 0; i < 15; i++) {
    std::cout << Fib(i) << ", ";
  }
  std::cout << "..." << std::endl;
  return 0;
}

int Fib(int n){
  int value = 0;

  if (n < 2) {
    value = n;
  } else {
    value = Fib(n-2) + Fib(n-1);
  }
  return value;
}
