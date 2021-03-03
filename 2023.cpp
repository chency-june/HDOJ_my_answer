#include <iostream>

using namespace std;

int main(void) {
    int n_stu, n_cou;
    while (cin >> n_stu >> n_cou) {
        int graph[50][5];
        double stu_ave[50];
        double cou_ave[5];
        for (int i = 0; i < n_stu; i++) {
            for (int j = 0; j < n_cou; j++) {
                cin >> graph[i][j];
            }
        }
        // calaulate stu average
        for (int i = 0; i < n_stu; i++) {
            int sum = 0;
            for (int j = 0; j < n_cou; j++) {
                sum += graph[i][j];
            }
            stu_ave[i] = (double)sum / n_cou;
        }
        // calculate cou average
        for (int j = 0; j < n_cou; j++) {
            int sum = 0;
            for (int i = 0; i < n_stu; i++) {
                sum += graph[i][j];
            }
            cou_ave[j] = (double)sum / n_stu;
        }
        int goodstu = 0;
        for (int i = 0; i < n_stu; i++) {
            bool isGood = true;
            for (int j = 0; j < n_cou; j++) {
                if (graph[i][j] < cou_ave[j]) {
                    isGood = false;
                    break;
                }
            }
            if (isGood) {
                goodstu++;
            }
        }
        // output
        for (int i = 0; i < n_stu; i++) {
            if (i == n_stu - 1) {
                printf("%.2lf\n", stu_ave[i]);
            }
            else {
                printf("%.2lf ", stu_ave[i]);
            }
        }
        for (int i = 0; i < n_cou; i++) {
            if (i == n_cou - 1) {
                printf("%.2lf\n", cou_ave[i]);
            }
            else {
                printf("%.2lf ", cou_ave[i]);
            }
        }
        printf("%d\n\n", goodstu);
    }
    return 0;
}