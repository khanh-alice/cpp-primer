#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a, b, c, d;
  cout << "Enter four integers (a b c d): ";
  cin >> a >> b >> c >> d;

  if (a > b && b > c && c > d) {
    cout << "a > b > c > d: True" << endl;
  } else {
    cout << "a > b > c > d: False" << endl;
  }
  return 0;
}
