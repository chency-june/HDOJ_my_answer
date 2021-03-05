#include <iostream>

using namespace std;

const int base = 1000;

int main(void) {
    int a, b;
    while ( cin >> a >> b, a || b ) {
        int p = 1;
        while (b--) {
            p = p * a % base;
        }
        cout << p << endl;
    }
    return 0;
}