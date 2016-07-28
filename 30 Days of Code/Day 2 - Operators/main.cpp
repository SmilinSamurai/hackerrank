#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double meatCostInput;
    int tipPercentInput, taxPercentInput;
    cin >> meatCostInput; // which is 12.00
    cin >> tipPercentInput; // which is 20
    cin >> taxPercentInput; // which is 8

    double tipPercent = meatCostInput * tipPercentInput / 100;
    double taxPercent = meatCostInput * taxPercentInput / 100;

    double totalCost = (meatCostInput + tipPercent + taxPercent);

    cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;

    return 0;
}
