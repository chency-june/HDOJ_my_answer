#include <iostream>

using namespace std;

int main(void) {
    long long int arr[41] = { 0, 1, 1, 2};
    for ( int i = 3; i < 41; i++ ) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}
