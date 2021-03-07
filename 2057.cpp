#include <cstdio>

int hex2int(char c) {
    if ( c >= '0' && c <= '9') {
        return c - '0';
    }
    else {
        return c - 'A' + 10;
    }
}

char int2hex(int n) {
    if (n < 10) {
        return (char)('0' + n);
    }
    else {
        return (char)('A' + n - 10);
    }
}

long long int str2hex(char arr[]) {
    bool negative = false;
    if (arr[0] == '-') {
        negative = true;
        arr++;
    }
    else if (arr[0] == '+') {
        arr++;
    }
    long long int res = 0;
    while (*arr) {
        res = ( res << 4 ) + hex2int(*arr);
        arr++;
    }
    if (negative) {
        res = -res;
    }
    return res;
}

void printhex(long long int x) {
    bool negative = false;
    if (x < 0) {
        negative = true;
        x = -x;
    }
    if (negative) {
        putchar('-');
    }
    bool start = false;
    for (int i = 15; i >= 0; i--) {
        if ( !start && ( ( x >> i * 4 ) & 0xF ) ) {
            start = true;
        }
        if (start) {
            putchar( int2hex( ( x >> i * 4 ) & 0xF ) );
        }
    }
    if (!start) {
        putchar('0');
    }
    putchar('\n');
}

int main(void) {
    char A[20], B[20];
    while (scanf("%s%s", A, B) != EOF ) {
        long long int a = str2hex(A);
        long long int b = str2hex(B);
        printhex(a + b);
    }
    return 0;
}