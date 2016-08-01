#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a;
    string b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << endl;
    string c = a + b;
    cout << c << endl;
    char aChar = a[0];
    char bChar = b[0];

    a[0] = bChar;
    b[0] = aChar;
    cout << a << " " << b << endl;
    return 0;
}
