#include <stdio.h>

int main(void)
{
    char c;
    int i, j, r = 1;
    printf("Enter c: ");
    scanf("%c", &c);
    getchar();
    c -= 4;

    for (i = 4; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < r; j++) {
            printf("%c", c + j);
        }
        for (j = 1; j < r; j++) {
            printf("%c", (c + r) - (j + 1));
        }
        r++;
        printf("\n");
    }
    return 0;
}
