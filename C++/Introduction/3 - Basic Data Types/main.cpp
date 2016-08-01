#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a = 3;
    long b = 444;
    long long c = 12345678912345;
    char d = 'a';
    float e = 334.23;
    double f = 14049.30493;
    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &e, &f);
    printf("%d\n%ld\n%lld\n%c\n%.2f\n%.5lf\n", a, b, c, d, e, f);
    return 0;
}
