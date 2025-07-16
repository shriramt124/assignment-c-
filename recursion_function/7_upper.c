#include <stdio.h>
char toUpperCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }
    else
    {
        return ch;
    }
}

int main()
{
    char input, output;

    printf("Enter a lowercase character: ");
    scanf(" %c", &input);
    output = toUpperCase(input);

    printf("Uppercase equivalent: %c\n", output);

    return 0;
}
