#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

vector<float> myvector1;

float mysum() {
  float sum = 0;
  for (unsigned int i = 0; i < myvector1.size(); i++) {
    sum = sum + myvector1[i];
  }
  return sum;
}

float myaverage() {
  float average;
  average = mysum() / myvector1.size();
  return average;
}

float mystdeviation() {
  float stdeviation, variance, sumvar = 0;
  for (unsigned int i = 0; i < myvector1.size(); i++) {
  sumvar = sumvar + (pow((myvector1[i] - myaverage()), 2));
}
  variance = sumvar / myvector1.size();
  stdeviation = sqrt(variance);
  return stdeviation;
}

int main() {

  float i;
  string stop1 = "stop", stop2;

  cout << "Enter a series of numbers, when you are finished type `stop´" << endl;
  do {
    cin >> stop2;
    if (stop2 != stop1) {
      i = stof(stop2);
      myvector1.push_back(i);
    }
  } while (stop2 != stop1);
  cout << "the total sum of the numbers is: " << mysum() << endl;
  cout << "the average of the numbers is: " << myaverage() << endl;
  cout << "the standard deviation of the numbers is: " << mystdeviation() << endl;
  return 0;
}
