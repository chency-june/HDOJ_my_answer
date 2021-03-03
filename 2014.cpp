#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int n;
    double max, min, tmp, sum;
    while (cin >> n) {
        int count = n - 2;
        cin >> tmp;
        max = min = sum = tmp;
        while (--n) {
            cin >> tmp;
            if (tmp > max) max = tmp;
            if (tmp < min) min = tmp;
            sum += tmp;
        }
        printf("%.2lf\n", (sum - max - min) / count);
    }
    return 0;
}