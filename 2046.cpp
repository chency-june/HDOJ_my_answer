#include <iostream>

using namespace std;

int main(void) {
    long long int arr[50] = {1, 2};
    for (int i = 2; i < 50; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int n;
    while (cin >> n) {
        cout << arr[n - 1] << endl;
    }
    return 0;
}