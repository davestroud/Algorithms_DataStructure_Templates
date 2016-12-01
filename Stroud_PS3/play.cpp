#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  cout << "Array of integers" << endl;
  cout << "=================" << endl;
  int values[3];

  values[0] = 88;
  values[1] = 123;
  values[2] = 7;

  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;

  cout << endl << "Array of integers " << endl;
  cout << "=================" << endl;

  double numbers[] = {4.5, 2.3, 7.2, 8.1};

  for(int i = 0; i < 4; i++) {
    cout << "Elements at index " << i << ": " << numbers[i] <<endl;
  }

  cout << endl << "Initializing with zero values " << endl;
  cout << "=================" << endl;

  int numberArray[8] = {};

  for (int i = 0; i < 8; i++) {
    cout << "Element at index " << i << ": " << numberArray[i] << endl;
  }

  // Array of strings
  cout << endl << "Initializing with strings " << endl;
  cout << "=================" << endl;

  string texts[] = {"apple", "banana", "orange"};

  for (int i = 0; i < 3; i++) {
    cout << "Fruits " << i << ": " << texts[i] << endl;
  }



  return 0;
}
