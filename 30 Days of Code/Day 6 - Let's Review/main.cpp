#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int t = 0;
    cin >> t; // Test Case
    cin.ignore();
    string s[t];

    for (int i = 0; i < t; i++) {
        getline(cin, s[i]);
    }

    string even[t];
    string odd[t];
    for (int i = 0; i < t; i++) {
        string inputString = s[i];
        string concatValEven = "";
        string concatValOdd = "";
        for (int j = 0; j < s[i].size(); j++) {
            if (j % 2 == 0) {
                concatValEven += inputString[j];
            } else {
                concatValOdd += inputString[j];
            }
        }
        even[i] = concatValEven;
        odd[i] = concatValOdd;
    }
    for (int i = 0; i < t; i++) {
        cout << even[i] << " " << odd[i] << endl;
    }
    return 0;
}
