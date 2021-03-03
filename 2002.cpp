#include <cstdio>
#include <cmath>

#define PI 3.1415927

int main(void) {
    double r;
    while (scanf("%lf", &r) != EOF) {
        printf("%.3lf\n", PI * 4 / 3 * pow(r, 3));
    }
    return 0;

}