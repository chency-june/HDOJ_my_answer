#include <cstdio>

int main(void) {
    double ways[21] = { 0, 0, 1, 2};
    double arrs[21] = { 1, 1, 2, 6};
    for (int i = 4; i < 21; i++) {
        ways[i] = ( i - 1 ) * ( ways[i - 1] + ways[i - 2] );
        arrs[i] = i * arrs[i - 1];
    }
    int n;
    scanf("%d", &n);
    while (n--) {
        int tmp;
        scanf("%d", &tmp);
        printf("%.2lf%%\n", ways[tmp] / arrs[tmp] * 100);
    }
    return 0;
}