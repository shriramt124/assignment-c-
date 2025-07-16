#include <stdio.h>
int main()
{
    int s, num, i;
    printf("Enter a 4 digit number:");
    scanf("%d", &num);
    s = num % 10 + num / 1000;
    printf("Sum of first and last digits:%d", s);
}