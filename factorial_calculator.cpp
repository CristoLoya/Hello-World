#include <iostream>

using namespace std;

int get_factorial(int original) {

  int factorial = 1, counter;

  for (counter = 1; counter <= original; counter++) {
    factorial = factorial * counter;
  }
  return factorial;
}

int main() {

  int original = -1, counter, factorial;
  char retry;

  do {
    while (original < 0) {
      cout << "type a non-negative integer" << endl;
      cin >> original;
      cin.ignore();
      if ( original < 0) {
        cout << original << " is not a positive integer, try again" << endl;
      }
    }
    cout << "the factorial of " << original << " is " << get_factorial(original) << endl;
    cout << "do you want to try it again? y/n" << endl;
    cin >> retry;
    while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y') {
      cout << "please enter a valid answer (y/n)" << endl;
      cin >> retry;
    }
    original = -1;
  } while (retry == 'y' || retry == 'Y');

  return 0;
}
