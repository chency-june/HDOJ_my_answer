#include <iostream>
#include <algorithm>

using namespace std;

int main (void) {
    int arr[100];
    int len;
    int n,m;
    while (cin >> n >> m, n || m) {
        len = 0;
        int tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            bool hasone = false;
            for (int j = 0; j < len; j++) {
                if (arr[j] == tmp) {
                    hasone = true;
                    break;
                }
            }
            if (!hasone) {
                arr[len++] = tmp;
            }
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            // check tmp
            for (int j = 0; j < len; j++) {
                if (arr[j] == tmp) {
                    arr[j] = arr[--len];
                }
            }
        }
        if (len) {
            sort(arr, arr + len);
            for (int i = 0; i < len; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "NULL" << endl;
        }
    }
    return 0;
}