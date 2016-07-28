#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial (int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return n * factorial(n - 1);
}

int main() {
    int i = 0;
    cin >> i;
    cout << factorial(i);
    return 0;
}
