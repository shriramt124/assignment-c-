#include <stdio.h>
int main()
{
    int age1, age2, age3;
    printf("Enter ages of Ram, Shyam, Ajay:");
    scanf("%d %d %d", &age1, &age2, &age3);

    if (age1 < age2 & age1 < age3)
        printf("Ram is the youngest");
    else if (age1 > age2 & age2 < age3)
        printf("Ram is the youngest");
    else if (age3 < age2 & age3 < age1)
        printf("Ram is the youngest");
    else
        printf("No one is Younger");
    return 0;
}