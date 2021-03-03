#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    const int maxn = 15 * 31;
    int arr[maxn];
    //calculate
    for (int i = 0; i < 30; i++) {
        arr[i * (i + 1) / 2] = 1;
        for (int j = 1; j < i; j++) {
            arr[i * (i + 1) / 2 + j] = arr[i * (i - 1) / 2 + j - 1] + arr[i * (i - 1) / 2 + j];
        }
        arr[( i + 1 ) * ( i + 2 ) / 2 - 1 ] = 1;
    }
    //input and output
    int n;
    bool first = true;
    while (cin >> n) {
        // if (first) {
        //     first = false;
        // }
        // else {      //bwteen two test case add a line
        //     cout << endl;
        // }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == i) {   //end of a line
                    printf("%d\n", arr[i * (i + 1) / 2 + j]);
                }
                else {          //else add a ' ';
                    printf("%d ", arr[i * (i + 1) / 2 + j]);
                }
            }
        }
        cout << endl;
    }

    return 0;
}