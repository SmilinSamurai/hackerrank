#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    s.erase(::remove_if(s.begin(), s.end(), ::isspace), s.end());
    for(int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    sort(s.begin(), s.end());
    string abc= "";
    for (char i = 'a'; i <= 'z'; i++) {
        abc += i;
    }
    int counter = 0;
    for (int i = 0; i < abc.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (abc[i] == s[j]) {
                ++i;
                counter++;
            }
        }
    }

    if (counter == 26) {
        cout << "pangram";
    } else {
        cout << "not pangram";
    }

    return 0;
}
