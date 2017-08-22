#include <iostream>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    int count = 0;
    int ans = a + b;
  
    while (ans >= 1) {
      count++;
      ans /= 10;
    }
    // cout << a << "," << b << "," << count << endl;
    cout << count << endl;
  }
  return 0;
}
