#include <iostream>

using namespace std;

int main(void) {
    int arr[40] = {3, 8 };
    for (int i = 2; i < 40; i++) {
        arr[i] = 2 * ( arr[i - 1] + arr[i - 2] );
    }
    int n;
    while ( cin >> n ) {
        cout << arr[n - 1] << endl;
    }
    return 0;
}