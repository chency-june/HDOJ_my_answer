#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int n;
    double tmp;
    while (cin >> n, n > 0) {
        int cntneg = 0, cntpos = 0, cnt0 = 0;
        while (n--) {
            cin >> tmp;
            if (tmp < 0) {
                cntneg++;
            } else if (tmp > 0) {
                cntpos++;
            } else {
                cnt0++;
            }
        }
        printf("%d %d %d\n", cntneg, cnt0, cntpos);
    }
    return 0;
}