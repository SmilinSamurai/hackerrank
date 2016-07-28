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
    int n;
    cin >> n;
    bitset<20> bit(n);
    int count = 0;
    vector<int> vect_count;
    for (int i = 0; i < bit.size(); i++){
        if (bit[i] == 1) {
            ++count;
            //cout << count << endl;
        } else {
            vect_count.push_back(count);
            count = 0;

        }
    }
    int greater_value = 0;
    for(int i = 0; i < vect_count.size(); i++) {
        //cout << vect_count[i];
        if (vect_count[i] > greater_value) {
            greater_value = vect_count[i];
        }
    }
    cout << greater_value << endl;
    return 0;
}
