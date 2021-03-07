#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

double big(double x[]) {
    return x[0] > x[1] ? x[0] : x[1];
}

double small(double x[]) {
    return x[0] < x[1] ? x[0] : x[1];
}

bool isInsersected(double x[], double y[]) {
    double *x1 = x, *x2 = x + 2;
    double *y1 = y, *y2 = y + 2;
    if (big(x1) < small(x2) || big(x2) < small(x1) || big(y1) < small(y2) || big(y2) < small(y1) ) {
        return false;
    }
    else {
        return true;
    }
}

int main(void) {
    double x[4], y[4];
    while ( cin >> x[0] >> y[0] ) {
        for (int i = 1; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        if (isInsersected(x, y)) {
            sort(x, x + 4);
            sort(y, y + 4);
            printf("%.2lf\n", ( x[2] - x[1] ) * ( y[2] - y[1] ) );
        }
        else {
            printf("0.00\n");
        }
    }
    return 0;
}