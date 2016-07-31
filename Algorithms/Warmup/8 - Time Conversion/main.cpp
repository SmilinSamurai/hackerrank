#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

// My method is a bit convoluted, but it still works.
//The method below is the more practice way of doing it.

int main(){
    string time;
    cin >> time;
    if ((time[8] == 'A' && time[0] == '1' && time[1] == '2')) {
        for (int i = 0; i < 2; ++i) {
            time[i] = '0';
        }
    } else if (time[8] == 'P') {
        int hh;
        string hhString;
        for (int i = 0; i < 2; ++i) {
            hhString += time[i];
        }
        stringstream ss (hhString);
        ss >> hh;
        hh += 12;
        if (hh == 24) {
            hh -= 12;
        }
        hhString = to_string(hh);
        time.replace(time.begin(),time.begin()+2,hhString);
    }
    time.erase(8, 2);
    cout << time;
    return 0;
}

// #include<iostream>
// #include<cstdio>
//
// using namespace std;
//
// int main() {
//     string s;
//     cin >> s;
//
//     int n = s.length();
//     int hh, mm, ss;
//     hh = (s[0] - '0') * 10 + (s[1] - '0');
//     mm = (s[3] - '0') * 10 + (s[4] - '0');
//     ss = (s[6] - '0') * 10 + (s[7] - '0');
//
//     if (hh < 12 && s[8] == 'P') hh += 12;
//     if (hh == 12 && s[8] == 'A') hh = 0;
//
//     printf("%02d:%02d:%02d\n", hh, mm, ss);
//
//     return 0;
// }
