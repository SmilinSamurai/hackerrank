#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int posN = 0;
    int negN = 0;
    int zeroN = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            ++negN;
        }
        if (arr[i] == 0) {
            ++zeroN;
        }
        if (arr[i] > 0) {
            ++posN;
        }
    }
    printf("%.5f\n", (float)posN/n);
    printf("%.5f\n", (float)negN/n);
    printf("%.5f\n", (float)zeroN/n);

    return 0;
}
