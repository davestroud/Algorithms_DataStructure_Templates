#include <iostream>
#include <vector>
namespace std

int main(int argc, char const *argv[]) {

  vector<string> strings;

  strings.push_back("one");
  strings.push_back("two");
  strings.push_back("three");

  for (vector<string>::iterator it = strings.begin(); it != strings.end()
      it++) {
        cout << *it <<endl;
      }

  
  return 0;
}
