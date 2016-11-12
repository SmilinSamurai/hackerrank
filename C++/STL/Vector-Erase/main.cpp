#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, position, start, end;
    cin >> size;
    vector<int> v(size);
    for(int i = 0; i < v.size(); i++)
        cin >> v[i];

    cin >> position;
    v.erase(v.begin() + (position - 1));
    cin >> start >> end;
    v.erase(v.begin() + (start-1), v.begin() + (end-1));

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
