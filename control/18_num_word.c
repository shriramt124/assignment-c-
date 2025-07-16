#include <stdio.h>
#include <stdbool.h>
bool isFibonacci(int n) {
    int a = 0, b = 1, temp;
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return (b == n || n == 0);
}
int main() {
    int num, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;
    int divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;
    printf("In words: ");
    while (divisor > 0) {
        digit = n / divisor;
        switch (digit) {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("five "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
        }
        n %= divisor;
        divisor /= 10;
    }
    printf("\n");
    if (isFibonacci(num))
        printf("Fibonacci number\n");
    else
        printf("Not a Fibonacci number\n");
    return 0;
}
