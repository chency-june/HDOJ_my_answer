#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        m--;
        int times = 0;
        for (int i = 0; 2 * i < m; i++) {
            int tmp = 1;
            for (int j = 0; j <= i; j++) {
                tmp = tmp * ( m - i - j ) / ( j + 1 );
            }
            times += tmp;
        }
        cout << times << endl;
    }
    return 0;
}
