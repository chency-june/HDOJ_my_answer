#include <cstdio>

int main(void) {
    int grade;
    char *map = "EEEEEEDCBAA";
    while (scanf("%d", &grade) != EOF) {
        if (grade < 0 || grade > 100) {
            printf("Score is error!\n");
            continue;
        }
        else {
            printf("%c\n", map[grade / 10]);
        }
    }
    return 0;
}