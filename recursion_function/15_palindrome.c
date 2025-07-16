#include <stdio.h>
int palindrome(int s, int temp, int n)
{
    if (temp == 0)
    {

        return s == n;
    }
    return palindrome(s * 10 + (temp % 10), temp / 10, n);
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    (palindrome(0, num1, num1)) ? printf("Number is palindrome") : printf("Number is not palindrome");
}