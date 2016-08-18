#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;


int main() {
    string s;
    getline(cin, s); // Read in the string
    s.erase(::remove_if(s.begin(), s.end(), ::isspace), s.end()); // Remove spaces for the string
    for(int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) { // check for uppercase letters
            s[i] = tolower(s[i]); // if there is an upper case, than change it to lower case
        }
    }
    sort(s.begin(), s.end()); // sort the string
    string abc= "";
    for (char i = 'a'; i <= 'z'; i++) {
        abc += i; // adding the alphabet to the empty string
    }
    int counter = 0;
    for (int i = 0; i < abc.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (abc[i] == s[j]) { // compares the string against the alphabet
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
