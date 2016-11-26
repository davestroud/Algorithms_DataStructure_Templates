#include <cstdlib>
#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int main(int argc, char const *argv[]) {


  int index;
  hash hashObj;

  index = hashObj.Hash("David");

  cout << "index =  " << index << endl;

  return 0;

}
