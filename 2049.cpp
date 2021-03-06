#include <iostream>

using namespace std;

int main(void) {
    long long int ways[21] = { 0, 0, 1, 2};
    for (int i = 4; i < 21; i++) {
        ways[i] = ( i - 1 ) * ( ways[i - 1] + ways[i - 2] );
    }
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long int tmp = 1;
        for (int i = 0; i < m; i++) {
            tmp = tmp * ( n - i ) / ( i + 1 );
        }
        cout << tmp * ways[m] << endl;
    }
    return 0;
}