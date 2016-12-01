#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {
  const int HIGH_SCORE = 95;
  int score1, score2, score3;
  double average;

  cout << "Enter the 3 test score and I will average them: ";
  cin >> score1 >> score2 >> score3;

  average = (score1 + score2 + score3) / 3.0;
  cout << fixed << showpoint << setprecision(1);
  cout << "Your average is " << average << endl;

  if (average > HIGH_SCORE)
    cout << "Congratulations!  That's a high score!\n";
  return 0;
}
