#include <stdio.h>

int cube_sum(int n) {
    if (n == 0)
        return 0;
    int digit = n % 10;
    return (digit * digit * digit) + cube_sum(n / 10);
}

int main() {
    int start, end;

    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i == cube_sum(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}