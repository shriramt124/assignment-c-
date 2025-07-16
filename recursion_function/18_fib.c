#include <stdio.h>

int fib(int n)
{
    if (n <= 2)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("The %dth Fibonacci number is %d", num1, fib(num1));
}