#include <stdio.h>

void gcd(int n1, int n2)
{
    if (n2 == 0)
    {
        printf("%d", n1);
        return;
    }
    gcd(n2, n1 % n2);
}
int main()
{
    int num1, num2;
    printf("Enter two number:");
    scanf("%d %d", &num1, &num2);
    gcd(num1, num2);
}