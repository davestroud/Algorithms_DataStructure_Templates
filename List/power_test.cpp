#include <cstdio>
#include <iostream>

using namespace std;

int power(int x, int n);

int main(int argc, char const *argv[])
{
  for (int i = 10; i < 16; i++)
  {
    for (int j = 1; j < 5; j++)
      {
        cout << "power(" << i << "," << j << ")=" << power(i,j);
        cout << endl;
      }
    }

    cout << endl << "Press any key to continue ... " << endl;
    getchar();

  return 0;
}

int power(int x, int n)
{
  int value = 0;

  if (n == 0)
    value = 1;
  else
    value = x * power(x, n-1);

  return value;
}
