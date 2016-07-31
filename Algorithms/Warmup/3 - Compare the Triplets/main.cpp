#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int a[3];
    int b[3];
    int aCounter = 0;
    int bCounter = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    };
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            aCounter++;
        } else if (a[i] < b[i]) {
            bCounter++;
        }
    }

    cout << aCounter << " " << bCounter;

    return 0;
}
