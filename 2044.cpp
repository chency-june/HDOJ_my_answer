#include <iostream>

using namespace std;
/*
 * 本题n最大到49，数量已经超过int的范围
 * 所以数组要开long long int
 */

int main(void) {
    long long int arr[50];
    arr[0] = arr[1] = 1;
    for (int i = 2; i < 50; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int n;
    int a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << arr[b - a] << endl;
    }
    return 0;
}