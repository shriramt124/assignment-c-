#include <stdio.h>
int main()
{
    int s, num, i;
    printf("Enter a 5 digit number:");
    scanf("%d", &num);
    s = 0;
    for (i = 0; i < 5; i++)
    {
        s = s * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number:%d", s);
}