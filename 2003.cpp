#include <cstdio>
#include <cmath>

int main(void) {
    double x;
    while ( scanf("%lf", &x) != EOF ) {
        printf("%.2lf\n", fabs(x));
    }
    return 0;
}