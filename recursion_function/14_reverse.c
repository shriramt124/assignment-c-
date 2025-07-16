#include <stdio.h>
void reverse(int n)
{
    if (n <=0)
    {
        return;
    }
    printf("%d",n%10);
    reverse(n/10);
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    reverse(num1);
}