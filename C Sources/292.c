#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float temp;
    float min;
    float max;
    float avg = 0;
    _Bool a = 1;

    scanf("%d", &n);
    int i = 0;

    do
    {
        scanf("%f", &temp);

        if (a)
        {
            a = 0;
            min = temp;
            max = temp;
            avg += temp;
            i++;
            continue;
        }

        avg += temp;
        if (temp < min)
        {
            min = temp;
        }
        else if (temp > max)
        {
            max = temp;
        }
        i++;
    } while (i < n);

    printf("Max: %.3f\nMin: %.3f\nAvg: %.3f", max, min, avg / n);
    return 0;
}
