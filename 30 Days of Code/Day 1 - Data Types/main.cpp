#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
// Declare second integer, double, and String variables.
    int j = 0;
    double k = 0;
    string g = "";
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> k;
    cin.ignore();
    getline(cin, g);
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;
    // Print the sum of the double variables on a new line.
    k += d;
    printf("%.1f\n",k);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string concat = s + g;
    cout << concat << endl;
    return 0;
}
