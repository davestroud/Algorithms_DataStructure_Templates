#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
    string name;

public:
    Test(string name):
            name(name) {


            }

            ~Test() {
                // cout << "Object desroyed" << endl;
            }

            void print() {
                cout << name << endl;
            }
};


int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
