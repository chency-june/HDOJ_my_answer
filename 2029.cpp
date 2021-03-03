#include <cstdio>
#include <cstring>

const int maxn = 100;

int main(void) {
    int n;
    char str[maxn];
    scanf("%d\n", &n);
    while (n--) {
        gets(str);
        int len = strlen(str);
        bool is = true;
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                is = false;
                break;
            }
        }
        if (is) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}