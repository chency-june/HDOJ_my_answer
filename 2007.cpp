#include <cstdio>

int main(void) {
    int start, end;
    while (scanf("%d%d", &start, &end) != EOF) {
        if (start >end) {
            int tmp = end;
            end = start;
            start = tmp;
        }
        int p2 = 0, p3 = 0;
        for (int i = start; i <= end; i++) {
            if (i % 2 == 1) {   // jishu
                p3 += i * i * i;
            } else {
                p2 += i * i;
            }
        }
        printf("%d %d\n", p2, p3);
    }
    return 0;
}