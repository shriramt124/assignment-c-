#include <stdio.h>
void fib(int n, int a, int b)
{
    if (n - 1 < 0)
    {
        return;
    }
    printf("%d,", a);
    fib(n - 1, b, a + b);
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    fib(n, 0, 1);
}
