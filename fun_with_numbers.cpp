#include <iostream>
using namespace std;

int main() {

  unsigned long int first_value, second_value, sum, difference, product, integer_based_division, remainder_of_integer_division;

  cout << "enter first value" << endl;
  cin >> first_value;
  cin.ignore();
  cout << "enter second value" << endl;
  cin >> second_value;
  cin.ignore();

  sum = first_value + second_value;
  difference = first_value - second_value;
  product = first_value * second_value;
  integer_based_division = first_value / second_value;
  remainder_of_integer_division = first_value % second_value;

  cout << "sum = " << sum << endl;
  cout << "difference = " << difference << endl;
  cout << "product = " << product << endl;
  cout << "integer based division = " << integer_based_division << endl;
  cout << "remainder of integer division = " << remainder_of_integer_division << endl;

  return 0;
}
