#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a, b;
    string numbers[10] = { // the zero is in the array as the array is offset by one
       "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(i > 9) {
            if(i % 2 == 0)
                cout << "even\n";
            else cout << "odd\n";
        }
        else {
            cout << numbers[i]<<endl;
        }
    }
    return 0;
}
