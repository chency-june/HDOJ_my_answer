#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        printf("%.2lf\n", sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) ) );
    }
    return 0;
}