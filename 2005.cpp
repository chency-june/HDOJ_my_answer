#include <cstdio>

int main(void) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day;
    while ( scanf("%d/%d/%d", &year, &month, &day) != EOF ) {
        days[1] = 28;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            days[1] ++;
        }
        int cnt = 0;
        for (int i = 0; i < month; i++) {
            cnt += days[i];
        }
        cnt -= days[month - 1] - day;
        printf("%d\n", cnt);
    }
    return 0;
}