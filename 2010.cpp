#include <cstdio>

bool isShxh(int n) {
    int x, y, z;
    x = n / 100;
    y = n / 10 % 10;
    z = n % 10;
    if ( x * x * x + y * y * y + z * z * z == n ) {
        return true;
    }
    else {
        return false;
    }
}

int main(void) {
    int m, n;
    while ( scanf("%d%d", &m, &n) != EOF) {
        bool notexist = true;
        bool first = true;
        for (int i = m; i <=n; i++) {
            if (isShxh(i)) {
                notexist = false;
                if (first) {
                    first = false;
                    printf("%d", i);
                }
                else {
                    printf(" %d", i);
                }
            }
        }
        if (notexist) {
            printf("no\n");
        } else {
            printf("\n");
        }
    }
    return 0;
}