#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a = 0;
    cin >> a;
    const int c_a = a;
    int arr[c_a];
    int b = 0;
    for (int i = 0; i < c_a; ++i) {
        cin >> b;
        arr[i] = b;
    }

    for (int i = c_a - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
  return 0;
}
