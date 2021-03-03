#include <cstdio>
#include <cmath>

bool isPrime(int n) {
    int m = (int)sqrt(n + 1);
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isAllPrime(int from, int to) {
    for (int i = from; i <= to; i++) {
        if (!isPrime(i * i + i + 41)) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int x, y;
    while (scanf("%d%d", &x, &y), x || y) {
        if (isAllPrime(x, y)) {
            printf("OK\n");
        }
        else {
            printf("Sorry\n");
        }
    }
    return 0;
}