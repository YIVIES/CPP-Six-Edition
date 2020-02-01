#include <stdio.h>

int main(void)
{
    char c = 'F';
    int i, j;

    for (i = 1; i <= 6; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", c - j);
        }
        printf("\n");
    }
    return 0;
}
