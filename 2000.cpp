#include <cstdio>
#include <algorithm>
#include <cstring>

int main(void) {
    char str[4];
    while (scanf("%s", str) != EOF) {
        std::sort(str, str + 3);
        printf("%c %c %c\n", str[0], str[1], str[2]);
    }
    return 0;
}