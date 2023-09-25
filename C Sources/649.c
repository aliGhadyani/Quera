#include <stdio.h>
#include <stdlib.h>

_Bool isAval(int n)
{
    for (int i = 2; i < n / 2 + 1; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int beginOfRange, endOfRange;
    scanf("%d%d", &beginOfRange, &endOfRange);
    _Bool smallerNum = 0;

    for (int i = beginOfRange + 1; i < endOfRange; i++)
    {
        if (!isAval(i))
            continue;

        if (smallerNum)
            printf(",");

        smallerNum = 1;

        printf("%d", i);
    }
    return 0;
}
