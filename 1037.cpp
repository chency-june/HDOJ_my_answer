#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 100;

struct Show {
    int s, e;
} show[maxn];

bool cmp_e(Show a, Show b) {
    return a.e < b.e;
}

int main(void) {
    int n;
    while (cin >> n, n > 0) {
        for (int i = 0; i < n; i++) {
            cin >> show[i].s >> show[i].e;
        }
        sort(show, show + n, cmp_e);
        int end = show[0].e;
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (show[i].s >= end) {
                count ++;
                end = show[i].e;
            }
        }
        cout << count << endl;
    }
    return 0;
}