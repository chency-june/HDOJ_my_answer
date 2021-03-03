#include <cstdio>
#include <cstring>

int main(void) {
    int n;
    char str[101];
    char aeiou[] = "aeiou";
    scanf("%d\n", &n);
    while (n--) {
        gets(str);
        int count[5] = {0};
        for (int i = 0; str[i]; i++) {
            switch(str[i]) {
                case 'a': count[0]++; break;
                case 'e': count[1]++; break;
                case 'i': count[2]++; break;
                case 'o': count[3]++; break;
                case 'u': count[4]++; break;
            }
        }
        for (int i = 0; i < 5; i++) {
            printf("%c:%d\n", aeiou[i], count[i]);
        }
        if (n) printf("\n");
    }
    return 0;
}