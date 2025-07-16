#include <stdio.h>
void sum(int s, int n)
{
    if (n == 0)
    {
        printf("Sum of digits:%d", s);
        return;
    }
    return sum(s + (n % 10), n / 10);
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    sum(0, num1);
}