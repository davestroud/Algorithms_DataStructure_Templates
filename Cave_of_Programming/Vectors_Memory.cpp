#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {

  vector<double> numbers(20);

  cout << "Size: " << numbers.size() << endl;

  int capacity = numbers.capacity();
  cout << "Capacity: " << capacity << endl;

  for(int i = 0; i < 10000; i++) {

    if(numbers.capacity() != capacity) {
      capacity = numbers.capacity();
      cout << "Capacity: " << capacity << endl;
    }

    numbers.push_back(i);

  }
  return 0;
}
