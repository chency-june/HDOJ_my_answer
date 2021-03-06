#include <iostream>

using namespace std;

int main(void) {
    int arr[31];
    arr[0] = 3;
    for (int i = 1; i < 31; i++) {
        arr[i] = 2 * ( arr[ i - 1 ] - 1 ) ;
    }
    int n;
    cin >> n;
    while (n--) {
        int tmp;
        cin >> tmp;
        cout << arr[tmp] << endl;
    }
    return 0;
}