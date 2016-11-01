#include <iostream>

int sum(int n);

int main(int argc, char const *argv[]) {
  std::cout << "Sum (4) = " << sum(4) << std::endl;
  return 0;
}

int sum(int n) {
  int sum = 0;

  for(int i = 1; i <= n; i++)
    sum += i * i * i;
  return sum;
}
