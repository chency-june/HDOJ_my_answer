#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int ah, am, as, bh, bm, bs;
    int n;
    cin >> n;
    while (n--) {
        cin >> ah >> am >> as >> bh >> bm >> bs;
        as += bs;
        am += as / 60;
        as = as % 60;
        am += bm;
        ah += am / 60;
        am = am % 60;
        ah += bh;
        cout << ah << " " << am << " " << as << endl;
    }
    return 0;
}