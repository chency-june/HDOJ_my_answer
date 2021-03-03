#include <cstdio>

double res[10010];

void caculate() {
    res[0] = 0;
    double flag[] = {-1, 1};
    for (int i = 1; i <= 1000; i++) {
        res[i] = res[i - 1] + flag[i % 2] / i;
    }
}

int main(void) {
    int n, t;
    caculate();
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%.2lf\n", res[n]);
    }
    return 0;
}