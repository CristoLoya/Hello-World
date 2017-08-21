#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

  int random, counter, guess;

  srand (time(0));

  random = 1 + (rand() % 100);

  cout << "guess a number between 1 and 100" << endl;

  while (random != guess) {
    cin >> guess;
    counter = counter + 1;
      if (guess < random) {
        cout << guess << " is too low, try again" << endl;
      }
      if (guess > random) {
        cout << guess << " is too high, try again" << endl;
      }
  }
  if (counter <= 1){
    cout << "Congratulations! It only took you 1 attempt" << endl;
  }
  else {
    cout << "Congratulations! It only took you " << counter << " attempts" << endl;
  }
return 0;
}
