#include <iostream>
#include <vector>

using namespace std;

#define MAX_N 10000

bool search(vector<int>& A, int n, int key) {
  int i = 0;
  A[n] = key;
  while( A[i] != key )
    i++;
  return i != n;
}

int main() {
  int n, q, key, sum = 0;
  vector<int> A;
  cin >> n;
  A.reserve(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> key;
    if (search(A, n, key))
      sum++;
  }
  cout << sum << endl;
  return 0;
}
