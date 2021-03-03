#include <cstdio>
#include <cstring>

int main(void) {
    char str[101];
    while (gets(str)) {
        for (int i = 0; str[i]; i++) {
            if (i == 0 || ( i > 0 && str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z' ) ) {
                str[i] += 'A' - 'a';
            }
        }
        printf("%s\n", str);
    }
    return 0;
}