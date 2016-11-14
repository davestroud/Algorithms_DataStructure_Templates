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
                //cout << "Object destroyed" << endl;
            }

            void print() {
                cout << name << endl;
            }
};

int main(int argc, char const *argv[]) {

  // LIFO
  stack<Test> testStack;

  testStack.push(Test("David"));
  testStack.push(Test("Jill"));
  testStack.push(Test("Jennifer"));

  cout << endl;

  /*
  * This is invalid code! Object is destroyed
  Test &test1 = testStack.top();
  testStack.pop();
  test1.print();
  testStack.pop();  // Reference refers to destroyed objects
  */

  while(testStack.size() > 0) {
    Test &test = testStack.top();
    test.print();
    testStack.pop();
  }

  // Break between algorithms.
  cout << endl;

  // FIFO
  queue<Test> testQueue;

  testQueue.push(Test("David"));
  testQueue.push(Test("Jill"));
  testQueue.push(Test("Jennifer"));

  cout << endl;

  /*
  * This is invalid code! Object is destroyed
  Test &test1 = testStack.top();
  testStack.pop();
  test1.print();
  testStack.pop();  // Reference refers to destroyed objects
  */

  testQueue.back().print(); // Last person to enter queue.

  cout << endl;

  while(testQueue.size() > 0) {
    Test &test = testQueue.front();
    test.print();
    testQueue.pop();
  }







  return 0;
}
