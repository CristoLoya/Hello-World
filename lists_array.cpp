#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int counter1 = 0, counter2 = 0;
  float array1[100], sum = 0, stdev, variance, sumvar = 0, average;
  char stop;

  cout << "enter a series of numbers" << endl;
  do  {
    cout << "enter the next number" << endl;
    cin >> array1[counter1];
    cin.ignore();
    counter1 ++;
    cout << "continue? (y/n). You currently have inserted " << counter1 << " value(s)" << endl;
    cin >> stop;
    cin.ignore();
    while (stop != 'n' && stop != 'N' && stop != 'y' && stop != 'Y') {
      cout << "please enter a valid answer (y/n). Continue?" << endl;
      cin >> stop;
      cin.ignore();
    }
  } while (stop == 'y' || stop == 'Y');

  do {
    sum = sum + array1[counter2];
    counter2 ++;
  } while (counter2 <= counter1);
  average = sum / counter1;
  counter2 = 0;
  do {
    sumvar = sumvar + (pow((array1[counter2] - average), 2));
    counter2 ++;
  } while (counter2 < counter1);
  variance = sumvar / counter1;
  stdev = sqrt(variance);

  cout << "the total sum of the numbers is " << sum << endl;
  cout << "the average of the numbers is " << average << endl;
  cout << "the standard deviation of the numbers is " << stdev << endl;

  return 0;
}
