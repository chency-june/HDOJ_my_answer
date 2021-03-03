#include <cstdio>
#include <cstring>

int main(void) {
    int n;
    char str[51];
    scanf("%d\n", &n);
    while (n--) {
        gets(str);
        bool legal = false;
        for (int i = 0; str[i]; i++) {
            if (i == 0) {
                if ( ( str[i] >= 'a' && str[i] <= 'z' ) || ( str[i] >= 'A' && str[i] <= 'Z' ) || str[i] == '_' ) {
                    legal = true;
                }
                else {
                    break;
                }
            }
            else {
                if ( !( ( str[i] >= 'a' && str[i] <= 'z' ) || ( str[i] >= 'A' && str[i] <= 'Z' ) || ( str[i] >= '0' && str[i] <= '9') || str[i] == '_' ) ) {
                    legal = false;
                    break;
                }
            }
        }
        if (legal) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}