#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int _a, _b, _c;
    cin >> _a >> _b >> _c;
    int a = max(_a, max(_b, _c)), b, c;
    if (a == _a) {
      b = _b;
      c = _c;
    } else if (a == _b) {
      b = _a;
      c = _c;
    } else if (a == _c) {
      b = _b;
      c = _a;
    }
    if (a * a == b * b + c * c) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    
  }
  return 0;
}
