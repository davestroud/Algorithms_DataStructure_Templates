#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  double daArray[]= {2.5, .7, 9.7, 6.5, 3.4, 1.8};
  int iLength = 6;

  // Output the unsorted array
  cout << "Initial Array: ";
  for (int iIndex = 0; iIndex < iLength; ++ iIndex) {
    cout << daArray[iIndex] << " ";
  }
  cout << endl;

  // The BubbleSort
  for (int iEnd = iLength - 1; iEnd > 0; --iEnd) {
    for (int iIndex = 0; iIndex < iEnd; ++ iIndex){
      // Check if the elements are out of order and and swap them, if needed
      if (daArray[iIndex] > daArray[iIndex + 1]) {
        double dTemp = daArray[iIndex];
        daArray[iIndex] = daArray[iIndex + 1];
        daArray[iIndex + 1] = dTemp;
      }
    }
  }

  // Output the sorted Array
  cout << "Sorted Array: ";
  for (int iIndex = 0; iIndex < iLength; ++ iIndex) {
    cout << daArray[iIndex] << " ";
  }
  cout << endl;

  return 0;
}
