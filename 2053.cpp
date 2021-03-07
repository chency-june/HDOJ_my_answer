#include <iostream>

using namespace std;

int main(void) {
    int n;
    while ( cin >> n ) {
        int condition = 0;
        for (int i = 1; i <= n; i++) {
            if ( n % i == 0 ) {
                condition = ( condition + 1 ) % 2;
            }
        }
        cout << condition << endl;
    }
    return 0;
}