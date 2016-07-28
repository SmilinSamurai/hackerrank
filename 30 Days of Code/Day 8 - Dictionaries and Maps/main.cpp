#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

    int n,number;
    string name1,name2;
    cin >> n;
    cin.ignore();
    map<string,int>friendList;
    //map<string,int>::iterator it = friendList.begin(); // it

    for(int i = 0; i < n; ++i) {
        cin >> name1;
        cin >> number;
        cin.ignore();
        friendList[name1] = number;

    }
    while(getline(cin,name2)) {
        if(friendList.count(name2) > 0) {
            cout << name2 << "=" << friendList[name2] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;

}
