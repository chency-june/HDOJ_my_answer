#include <iostream>

using namespace std;

int main(void) {
    int n;
    while ( cin >> n ) {
        bool start = false;
        for (int i = 9; i >= 0; i--) {
            if ( !start ) {
                if ( n & ( 1 << i ) ) {
                    start = true;
                }
            }
            if (start) {
                cout << ( ( n >> i ) & 1 );
            }
        }
        cout << endl;
    }
    return 0;
}