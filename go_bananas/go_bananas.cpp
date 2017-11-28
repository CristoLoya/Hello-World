#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int find_bananas(string filename) {
  string banana = "banana", line;
  int num_banana = 0, n = 0;

  ifstream file(filename.c_str());

  while (getline(file, line)) {
    for (int i = 0;i <= line.size();i++) {
      line[i] = tolower(line[i]);
    }
    n = line.find(banana);
    while (n >= 0) {
      num_banana++;
      n = line.find(banana, n+6);
    }
  }
  return num_banana;
}

int main() {
  string filename = "test.txt";
  cout <<   "the word banana was found " << find_bananas(filename) << " times" << endl;
return 0;
}
