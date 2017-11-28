#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string line;
  struct numbers {
    int num_char;
    int num_lines;
  }data1 = {0, 0};

  ifstream file("test.txt");
  while (getline(file, line)) {
    data1.num_char = data1.num_char + line.length();
    data1.num_lines++;
  }
  cout << "number of lines: " << data1.num_lines << endl;
  cout << "number of characters: " << data1.num_char << endl;
return 0;
}
