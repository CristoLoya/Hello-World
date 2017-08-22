#include <iostream>

using namespace std;

int get_sum(int x, int y) {

  int sum;
  sum = x + y;
  return sum;
}

int get_difference(int x, int y) {

  int difference;
  difference = x - y;
  return difference;
}

int get_product(int x, int y) {

  int product;
  product = x * y;
  return product;
}

int get_integer_based_division(int x, int y) {

  int integer_based_division;
  integer_based_division = x / y;
  return integer_based_division;
}

int get_remainder_of_integer_division(int x, int y) {

  int remainder_of_integer_division;
  remainder_of_integer_division = x % y;
  return remainder_of_integer_division;
}
int main() {

  int x, y;

  cout << "please enter the first value" << endl;
  cin >> x;
  cin.ignore();
  cout << "please enter the second value" << endl;
  cin >> y;
  cin.ignore();
  cout << "the sum of the two numbers is " << get_sum(x, y) << endl;
  cout << "the difference of the two numbers is " << get_difference(x, y) << endl;
  cout << "the product of the two numbers is " << get_product(x, y) << endl;
  cout << "the integer based division of the two numbers is " << get_integer_based_division(x, y) << endl;
  cout << "the remainder of the integer based division is " << get_remainder_of_integer_division(x, y) << endl;

  return 0;
}
