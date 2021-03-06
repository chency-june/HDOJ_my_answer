#include <iostream>

using namespace std;

int QH (int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if ( n % i == 0 ) {
            sum += i;
        }
    }
    return sum;
}

int main(void) {
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a == QH(b) && b == QH(a)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}