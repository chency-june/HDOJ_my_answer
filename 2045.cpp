#include <iostream>

using namespace std;

int main(void) {
    long long int arr[51] = { 0, 1, 2, 2 };
    for (int i = 4; i < 51; i++) {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }
    int n;
    while (cin >> n) {
        cout << 3 * arr[n] << endl;
    }
    return 0;
}