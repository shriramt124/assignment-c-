#include <stdio.h>
int main() {
    int i = 0;
    while (i <= 255) {
        printf("ASCII %d = %c\n", i, i);
        i++;
    }
    return 0;
}
    