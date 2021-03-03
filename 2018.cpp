#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int arr[60] = {1, 1, 1};
    for (int i = 3; i < 60; i++) {
        arr[i] = arr[i - 1] + arr[i - 3];
    }
    int n;
    while (cin >> n, n > 0) {
        cout << arr[n + 1] << endl;
    }
    return 0;
}