#include <stdio.h>

int main(void)
{
    const char letter[26] = {
    'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r',
    's', 't', 'u', 'v', 'w', 'x',
    'y', 'z'
    };
    int i = 0;
    while (i <= 25) {
        printf("%c ", letter[i]);
        i++;
    }
    return 0;
}
