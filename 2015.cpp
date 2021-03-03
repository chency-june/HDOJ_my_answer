#include <cstdio>

int main(void) {
    int n, m;
    while ( scanf("%d%d", &n, &m) != EOF ) {
        for (int i = 0; i < (n - 1) / m; i++) {
            printf("%d ", (2 * i + 1) * m + 1);
        }
        printf("%d\n", (n - 1) / m * m + 1 + n);
    }
    return 0;
}