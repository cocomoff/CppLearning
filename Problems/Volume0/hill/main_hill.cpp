#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define M 10
#define REQUIRED 3

bool ascending (int i, int j) { return i > j; }

int main() {
  vector<int> heights(M, 0);
  for (int i = 0; i < M; i++) {
    cin >> heights[i];
  }

  std::sort(heights.begin(), heights.end(), ascending);
  for (int i = 0; i < REQUIRED; i++) {
    cout << heights[i] << endl;
  }
  
  return 0;
}
