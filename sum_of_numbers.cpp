#include <iostream>

using namespace std;

int main() {

  int counter, lowerbound, upperbound, sum = 0;

  do {
    cout << "enter lower bound" << endl;
    cin >> lowerbound;
    cout << "enter upper bound" << endl;
    cin >> upperbound;
    if (lowerbound > upperbound) {
      cout << "your lower bound is greater than your upper bound, try again" << endl;
    }
  } while(lowerbound > upperbound);

  for ( counter = lowerbound; counter <= upperbound; counter++) {
    sum = sum + counter;
  }

  cout << "the sum from " << lowerbound << " to " << upperbound << " (inclusive) is " << sum << endl;
  return 0;
}
