#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    // 暴力穷举
    int n;
    while ( scanf("%d", &n) != EOF ) {
        int *arr = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int t = 1;
        bool found = false;
        while (!found) {
            bool is = true;
            for (int i = 0; i < n; i++) {
                if ( t % arr[i] != 0 ) {
                    is = false;
                    break;
                }
            }
            if (is) {
                found = true;
                break;
            }
            else {
                t++;
            }
        }
        printf("%d\n", t);
    }
    return 0;
}