#include <cstdio>

int main(void) {
    int n, tmp;
    while ( scanf("%d", &n) != EOF ) {
        int product = 1;
        while (n--) {
            scanf("%d", &tmp);
            if (tmp % 2 == 1) product *= tmp;
        }
        printf("%d\n", product);
    }
    return 0;
}