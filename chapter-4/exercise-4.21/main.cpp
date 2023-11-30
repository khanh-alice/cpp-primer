#include <iostream>

using std::cout;
using std::vector;

int main() {
  vector<int> iv = {1, 2, 3, 4, 5};
  for (auto &i : iv) {
    i = i % 2 == 0 ? i : i * 2;
  }

  for (auto i : iv) {
    cout << i << " ";
  }
  return 0;
}
