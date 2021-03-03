#include <cstring>
#include <cstdio>

int main(void) {
    char str[101];
    while (gets(str)) {
        // find max
        char max = str[0];
        for (int i = 1; str[i]; i++) {
            if (str[i] > max) max = str[i];
        }
        for (int i = 0; str[i]; i++) {
            putchar(str[i]);
            if (str[i] == max) printf("(max)");
        }
        putchar('\n');
    }
    return 0;
}