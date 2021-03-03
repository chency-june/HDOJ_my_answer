#include <iostream>

using namespace std;

int main(void) {
    int n;
    while (cin >> n, n > 0) {
        int sal;
        int count = 0;
        int rmb[] = {100, 50, 10, 5, 2, 1};
        while (n--) {
            cin >> sal;
            for (int i = 0; i < 6 && sal > 0; i++) {
                if (sal >= rmb[i]) {
                    count += sal / rmb[i];
                    sal = sal % rmb[i];
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}