#include <cstdio>

int main(void) {
    for (int i = 2000; i < 2100; i++) {
        printf("<p>\n<a href = \"");
        printf("http://acm.hdu.edu.cn/showproblem.php?pid=%d\n", i);
        printf("\" > %d </a></p>\n", i);
    }
}