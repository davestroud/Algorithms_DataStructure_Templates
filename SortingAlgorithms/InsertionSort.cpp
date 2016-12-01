#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int iaArray[] = {24, 5, 3, 35, 14, 23, 19};
  int iLength = 7;

  // Insertion sorted
  for (int iIndex = 1; iIndex < iLength; ++iIndex) {
    // Initialize a local insertion iIndex
    int iInsert = iIndex;
    while (iInsert >0 && iaArray[iInsert - 1] > iaArray[iInsert]) {
      int iSwap = iaArray[iInsert];
      iaArray[iInsert] = iaArray[iInsert - 1];
      iaArray[iInsert - 1] = iSwap;
      --iInsert;
    }
  }

  // Output the sorted Array
  for (int iIndex = 0; iIndex < iLength; ++iIndex) {
    cout << iaArray[iIndex] << "  ";
  }
  cout << endl;

  return 0;
}
