#include <iostream>
using namespace std;

int gcd(int x, int y) {
  if (x < y) {
    return gcd(y, x);
  } else {
    if (x % y == 0) {
      return y;
    } else {
      return gcd(y, x % y);
    }
  }
}

int main() {
  int x, y;
  cin >> x >> y;
  int ans = gcd(x, y);
  cout << ans << endl;
  return 0;
}
