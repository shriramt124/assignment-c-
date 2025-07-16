#include <stdio.h>
int main() {
    int year, day = 1;
    printf("Enter year: ");
    scanf("%d", &year);
    int refYear = 1900;
    int totalDays = 0;
    for (int i = refYear; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }
    day = (totalDays % 7);
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("1st January %d is %s\n", year, days[day]);
    return 0;
}