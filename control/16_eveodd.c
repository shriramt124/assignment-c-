#include <stdio.h>
int main() {
    int num, digit, evenSum = 0, oddProd = 1;
    printf("Enter a 6-digit number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddProd *= digit;
        num /= 10;
    }
    printf("Sum of even digits: %d\n", evenSum);
    printf("Product of odd digits: %d\n", oddProd);
    return 0;
}
