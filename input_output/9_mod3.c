#include <stdio.h>
int main()
{
    int num;
    printf("Enter a 5 digit number:");
    scanf("%d", &num);

    printf("Remainder of the number when divided by 3 is :%d", (num % 3));
}