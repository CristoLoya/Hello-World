#include <iostream>
using namespace std;

int main() {

  unsigned long int fahrenheit, celcius;

  cout << "enter value in fahrenheit" << endl;
  cin >> fahrenheit;

  celcius = 5 * (fahrenheit - 32) / 9;

  cout << "the temperature in celcius = º" << celcius << endl;

  if (celcius < 100) {

    cout << "water will not boil" << endl;
  }
  else {

    cout << "water will boil" << endl;
  }

  return 0;
}
