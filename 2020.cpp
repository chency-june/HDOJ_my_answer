#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    return x > y;
}
 
int main(void) {
    int n;
    while (cin >> n, n > 0) {
        int arr[100];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << arr[i] << endl;
            }
            else {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}