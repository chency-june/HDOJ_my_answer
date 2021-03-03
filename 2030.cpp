#include <cstdio>
#include <cstring>

const int maxn = 200;

int main(void) {
    char str[maxn];
    int n;
    scanf("%d\n", &n);
    while (n--) {
        gets(str);
        int len = strlen(str);
        int count = 0;
        for (int i = 0; i < len; i++) {
            if ( str[i] & 0x80 ) {
                count ++;
                i ++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}