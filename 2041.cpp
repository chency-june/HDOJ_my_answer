#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        m--;
        long long int times = 0;
        for (int i = 0; 2 * i <= m; i++) {
            // C (m-i) i
            long long int tmp = 1;
            for (int j = 1; j <= i; j++) {
                tmp = tmp * ( m - i - j + 1 ) / j;
            }
            times += tmp;
        }
        cout << times << endl;
    }
    return 0;
}
