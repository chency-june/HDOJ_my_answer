#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int PI = acos(-1);

struct Point {
    int x, y;
} p[100];

int len2(int a, int b) {
    return ( p[a].x - p[b].x ) * ( p[a].x - p[b].x ) + ( p[a].y - p[b].y ) * ( p[a].y - p[b].y );
}

double angle(int a) {
    double a1;
    if (p[a].x > p[0].x) {
        a1 = atan( (double)(p[a].y - p[0].y) / (p[a].x - p[0].x) );
    }
    else if (p[a].x < p[0].x) {
        a1 = PI + atan( (double)(p[a].y - p[0].y) / (p[a].x - p[0].x) );
    }
    else if (p[a].y > p[0].y) {
        a1 = PI / 2;
    }
    else {
        a1 = - PI / 2;
    }
    return a1;
}

double area(int a, int b) {
    double angle1 = angle(a);
    double angle2 = angle(b);
    double minus = angle1 - angle2;
    bool negative = true;
    if ( ( minus < 0 && minus > -PI ) || ( minus > PI && minus < 2 * PI ) ) {
        negative = false;
    }
    double a2 = len2(a, b);
    double b2 = len2(0, a);
    double c2 = len2(0, b);
    double s = 0.25 * sqrt( a2 * ( 2 * b2 - a2 ) + b2 * ( 2 * c2 - b2 ) + c2 * ( 2 * a2 - c2 ) );
    if (negative) {
        s = -s;
    }
    return s;
}

int main(void) {
    int n;
    while (cin >> n, n > 0) {
        int x, y;
        // int len = 0;
        double sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> p[i].x >> p[i].y;
        }
        for (int i = 2; i < n; i++) {
            sum += area(i - 1, i);
        }
        printf("%.1lf\n", sum);
    }
    return 0;
}