#include <stdio.h>
int main() {
    int i, j, flag;
    for (i = 2; i < 100; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    return 0;
}