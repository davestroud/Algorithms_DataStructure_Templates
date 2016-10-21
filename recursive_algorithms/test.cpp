#include <iostream>



void collectContributions(int n) {
  if (n <=100) {
    std::cout << "Collect from a single donor" << std::endl;
  } else {
    collectContributions(n / 10);
  }
}

int main(int argc, char const *argv[]) {
  std::cout << "Contributions = " << n(1000) << std::endl;
  return 0;
}
