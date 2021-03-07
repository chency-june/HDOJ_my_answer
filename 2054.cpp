/*
 * Wrong Answer
 * 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double a, b;
    while ( cin >> a >> b ) {
        if ( fabs(a - b) < 1e-6  ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}