#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int num = 0;
  while (cin >> num && num != 42) {
    cout << "Not 42, continue reading..." << endl;
  }
  cout << "Found 42, exiting..." << endl;
  return 0;
}
