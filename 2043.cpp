#include <cstdio>
#include <cstring>

int char_type(char c) {
    int res = 0;
    if ( c >= 'A' && c <= 'Z' ) {
        res = 1;
    }
    else if ( c >= 'a' && c <= 'z' ) {
        res = 2;
    }
    else if ( c >= '0' && c <= '9' ) {
        res = 3;
    }
    else {
        switch (c) {
            case '~':
            case '!':
            case '@':
            case '#':
            case '$':
            case '%':
            case '^':
            res = 4;
            break;
        }
    }
    return res;
}

int main(void) {
    int n;
    char str[51];
    scanf("%d\n", &n);
    while (n--) {
        scanf("%s", str);
        int type[5] = {0};
        int len = strlen(str);
        if (len < 8 || len > 16) {
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < len; i++) {
            type[char_type(str[i])] = 1;
        }
        if (type[0] || type[1] + type[2] + type[3] + type[4] < 3 ) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}