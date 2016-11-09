#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {

    vector<vector<int> > grid(5, vector<int>(5, 2));

    for(int row = 0; row < grid.size(); row++) {
      for(int col = 0; col < grid[row].size(); col++) {
        cout << grid[row][col] << flush;
      }

      cout << endl;
    }

  return 0;
}
