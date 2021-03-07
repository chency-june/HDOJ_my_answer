#include <cstdio>

int f(char c) {
    if ( c >= 'A' && c <= 'Z' ) {
        return c - 'A' + 1;
    }
    else if ( c >= 'a' && c <= 'z' ) {
        return -1 - ( c - 'a' );
    }
    else return 0;
}

int main(void) {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char c;
        int n;
        scanf("%c%d\n", &c, &n);
        printf("%d\n", f(c) + n );
    }
    return 0;
}