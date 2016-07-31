#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctype.h> // isupper()
using namespace std;


int main() {
    string s;
    getline(cin, s);
    int counter = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            counter++;
        }
    }
    cout << counter;

    return 0;
}
