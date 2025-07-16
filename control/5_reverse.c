#include <stdio.h>
int main()
{
    int temp, s, num, i;
    printf("Enter a 5 digit number:");
    scanf("%d", &num);
    s = 0;
    temp = num;
    for (i = 0; i < 5; i++)
    {
        s = s * 10 + num % 10;
        num /= 10;
    }
    (s == temp) ? printf("Number is Equal")
                 : printf("Number is not Equal");
}