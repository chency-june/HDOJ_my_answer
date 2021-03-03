#include <iostream>
#include <cstdlib>

using namespace std;

bool isChosen(int grade, bool set) {
    static int min = 0;
    if (set) {min = 0; return false;}
    if (grade > 0) {
        grade = -grade;
    }
    if (grade < min) {
        min = grade;
        return true;
    }
    return false;
}

int main(void) {
    int m, n;
    while (cin >> m >> n) {
        int *arr = (int *)malloc(sizeof(int) * m * n);
        isChosen(0, true);
        int chose_i = 1;
        int chose_j = 1;
        int chose_grade = 0;
        int tmp;
        for (int i = 0; i < m; i++) {
            for (int j= 0; j < n; j++) {
                cin >> tmp;
                if (isChosen(tmp, false)) {
                    chose_i = i + 1;
                    chose_j = j + 1;
                    chose_grade = tmp;
                }
            }
        }
        printf("%d %d %d\n", chose_i, chose_j, chose_grade);
        free(arr);
    }
    return 0;
}