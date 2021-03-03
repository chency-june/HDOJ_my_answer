#include <cstdio>

int main(void) {
    int n;
    scanf("%d\n", &n);
    char c;
    while (n--) {
        int cnt = 0;
        while ( ( c = getchar() ) != '\n' ) {
            if ( c <= '9' && c >= '0' ) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}