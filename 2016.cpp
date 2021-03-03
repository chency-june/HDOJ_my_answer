#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int arr[100];
    int n;
    while ( scanf("%d", &n), n != 0 ) {
        cin >> arr[0];
        int min = arr[0];
        int index_min = 0;
        for (int i = 1; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < min) {
                min = arr[i];
                index_min = i;
            }
        }
        int tmp = arr[0];
        arr[0] = arr[index_min];
        arr[index_min] = tmp;
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i == n - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }
    return 0;
}