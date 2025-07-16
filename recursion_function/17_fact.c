#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("Factorial of number:%d", factorial(num1));
}