#include <stdio.h>
void even_printer(int i, int j)
{
    if (i == j)
    {
        if (!(i & 1))
            printf("%d", i);
        return;
    }
    if (!(i & 1))
        printf("%d ", i);
    even_printer(i + 1, j);
}
int main()
{
    int num1, num2;
    printf("Enter range from i to j:");
    scanf("%d %d", &num1, &num2);
    even_printer(num1, num2);
}