#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Absolute value: %d\n", (n < 0) ? -n : n);
    return 0;
}
