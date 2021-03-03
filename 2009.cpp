#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void) {
    double n;
    int m;
    while (cin >> n >> m) {
        double sum = 0;
        while (m--) {
            sum += n;
            n = sqrt(n);
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}