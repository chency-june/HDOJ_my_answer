#include <iostream>

using namespace std;

int main(void) {
    int n, x;
    while (cin >> n >> x, n || x) {
        int arr[101];
        bool inserted = false;
        for (int i = 0; i <= n; i++) {
            if (i < n || inserted)
                cin >> arr[i];
            else {
                arr[i] = x;
                break;
            }
            if (!inserted && arr[i] > x) {
                inserted = true;
                arr[i +1] = arr[i];
                arr[i] = x;
                i++;
            }
        }
        for (int i = 0; i <= n; i++) {
            if (i == n) {
                cout << arr[i] << endl;
            }
            else {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}