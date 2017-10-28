
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include "BigIntegerLibrary.hh"

using namespace std;

/*
 * This function receives a BigInteger n and checks if it is a palindrome
 * Return true if n is a palindrome, return false otherwise
 */
bool is_palindrome(BigInteger n){
  BigInteger n2;
  n2 = n;
  string palindromestring;
  palindromestring = bigIntegerToString(n);
  reverse(palindromestring.begin(), palindromestring.end());
  n = stringToBigInteger(palindromestring);
  if (n == n2) {
    return true;
  }
  if (n != n2) {
    return false;
  }
}

bool is_nonlycherel(BigInteger n){
  BigInteger n2, n3;
  string nstring;
  bool check;
  n3 = n;
  for (int i = 0; i <= 30; i++) {
    check = is_palindrome(n3);
    if (check == true) {
      return true;
    } else {
      n2 = n3;
      nstring = bigIntegerToString(n3);
      reverse(nstring.begin(), nstring.end());
      n = stringToBigInteger(nstring);
      n3 = n + n2;
    }
    }
    return false;
}

int main() {
  BigInteger lowerbound, upperbound;
  string stringlowerbound, stringupperbound;
  int counterpalindrome = 0, counterlycherels = 0, counternonlycherels = 0;
  bool checkvalue;
  vector <BigInteger> lycherels;

  cout << "enter the first number of your parameter" << endl;
  cin >> stringlowerbound;
  cout << "enter the second number of your parameter" << endl;
  cin >> stringupperbound;
  lowerbound = stringToBigInteger(stringlowerbound);
  upperbound = stringToBigInteger(stringupperbound);
  for (BigInteger i = lowerbound; i <= upperbound; i++) {
    checkvalue = is_palindrome(i);
    if (checkvalue == true) {
      counterpalindrome = counterpalindrome + 1;
    }
    if (checkvalue == false) {
      checkvalue = is_nonlycherel(i);
      if (checkvalue == true) {
        counternonlycherels = counternonlycherels + 1;
      } else {
        counterlycherels = counterlycherels + 1;
        lycherels.push_back(i);
      }
    }
  }
  cout << "in the range from " << lowerbound << " to " << upperbound << " there are " << counterpalindrome << " palindromes" << endl;
  cout << "in the range from " << lowerbound << " to " << upperbound << " there are " << counternonlycherels << " nonlycherels" << endl;
  cout << "in the range from " << lowerbound << " to " << upperbound << " there are " << counterlycherels << " lycherels" << endl;
  cout << "the lycherels in that parameter are: ";
  for (int i = 0; i < lycherels.size(); i++) {
    cout << lycherels[i] << ", ";
  }
  cout << endl;
  return 0;
}
