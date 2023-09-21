#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char number[10];

    scanf("%s", &number);

    int a = strlen(number);
    _Bool isKhodMaghlob = 1;

    for (int i = 0; i < a / 2; i++)
    {
        if (number[i] != number[a - 1 - i])
        {
            isKhodMaghlob = 0;
            break;
        }
    }

    if (isKhodMaghlob)
        printf("YES");
    else
        printf("NO");

    return 0;
}
