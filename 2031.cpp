#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int arr[50];
    int x, n;
    char map[] = "0123456789ABCDEF";
    while (cin >> x >> n) {
        bool neg = false;
        if ( x < 0 ) {
            neg = true;
            x = -x;
        }
        int cnt = 0;
        while ( x ) {
            arr[cnt++] = x % n;
            x /= n;
        }
        if (neg) printf("-");
        while (cnt--) {
            putchar(map[arr[cnt]]);
        }
        putchar('\n');
    }
    return 0;
}