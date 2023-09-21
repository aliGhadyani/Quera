#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char number[100];

    scanf("%s", &number);

    for (int i = 0; i < strlen(number); i++)
    {
        printf("%c: ", number[i]);
        for (int j = 0; j < (number[i] - '0'); j++)
            printf("%c", number[i]);
        printf("\n");
    }
    return 0;
}
