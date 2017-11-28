#include <iostream>

using namespace std;

float sqrt_num(float num) {
  float guess[2];
  int i = 1;

  guess[0] = num / 2;
  while (guess[0] != guess[1]) {
    if (i == 1) {
      guess[1] = (guess[0] + (num / guess[0])) / 2;
      i--;
    }
    if (i == 0) {
      guess[0] = (guess[1] + (num / guess[1])) / 2;
      i++;
    }
  }
  return guess[0];
}

int main() {
  float num;

  cout << "enter a number you want to know the square root of" << endl;
  cin >> num;
  cout << "the square root of the number is approximately: " << sqrt_num(num) << endl;
return 0;
}
