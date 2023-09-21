#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, max, min, bein;
    cin >> x1;
    cin >> x2;
    cin >> x3;

    if (x1 >= x2)
    {
        max = x1;
        min = x2;
    }
    else if (x2 >= x1)
    {
        max = x2;
        min = x1;
    }
    if (x3 >= max)
    {
        max = x3;
    }
    else if (x3 <= min)
    {
        min = x3;
    }
    if (x1 > min && x1 < max)
    {
        bein = x1;
    }
    if (x2 > min && x2 < max)
    {
        bein = x2;
    }
    if (x3 > min && x3 < max)
    {
        bein = x3;
    }
    if (max == (sqrt((pow(min, 2)) + (pow(bein, 2)))))
    {
        cout << "YES";
    }
    if (max != (sqrt((pow(min, 2)) + (pow(bein, 2)))))
    {
        cout << "NO";
    }
    return 0;
}
