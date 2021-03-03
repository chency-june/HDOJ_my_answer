#include <cstdio>

int main(void) {
    int n;
    while ( scanf("%d", &n) != EOF ) {
        int num = 1;
        while (--n) {
            num = (num + 1) * 2;
        }
        printf("%d\n", num);
    }
    return 0;
}