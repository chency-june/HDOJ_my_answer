#include <cstdio>

int main(void) {
    int width, height;
    while ( scanf("%d%d", &width, &height) != EOF ) {
        width++;
        height++;
        for (int i = 0; i <= height; i++) {
            for (int j = 0; j <= width; j++) {
                if ( ( i == 0 || i == height ) && ( j == 0 || j == width ) ) {
                    printf("+");
                }
                else if ( i == 0 || i == height ) {
                    printf("-");
                }
                else if ( j == 0 || j == width ) {
                    printf("|");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}