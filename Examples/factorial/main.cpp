#include <iostream>

int factorial2(int n);

int main(int argc, char const *argv[]) {
  std::cout << "The factorial(4) = " << factorial2(4) << std::endl;
  return 0;
}

int factorial2(int n) {
  if (n == 0){
    return 1;
  } else {
    return n * factorial2(n -1);
  }
}
