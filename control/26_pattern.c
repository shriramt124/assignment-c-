#include <stdio.h>

int main() {
    char ch = 'A';

    // Upper half
    printf("%c\n", ch++);                 // Line 1: A

    printf("%c%c\n", ch, ch + 1);         // Line 2: BC
    ch += 2;

    printf("%c%c%c%c\n", ch, ch + 1, ch + 2, ch + 3); // Line 3: DEFG
    ch += 4;

    // Lower half (reversed letters from last line)
    printf("%c%c%c\n", ch - 2, ch - 3, ch - 4); // Line 4: FED

    printf("%c%c\n", ch - 5, ch - 6);     // Line 5: CB

    printf("%c\n", ch - 7);               // Line 6: A

    return 0;
}
