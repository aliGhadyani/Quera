#include <iostream>

using namespace std;

int main()
{
    float x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    float max = x1, min = x1;

    if (x2 < min)
    {
        min = x2;
    }
    else if (x2 > max)
    {
        max = x2;
    }
    if (x3 < min)
    {
        min = x3;
    }
    else if (x3 > max)
    {
        max = x3;
    }
    if (x4 < min)
    {
        min = x4;
    }
    else if (x4 > max)
    {
        max = x4;
    }
    float sum = x1 + x2 + x3 + x4;
    float product = x1 * x2 * x3 * x4;
    float average = sum / 4;
    cout.precision(6);

    cout << "Sum : " << fixed << sum << endl;
    cout << "Average : " << average << endl;
    cout << "Product : " << product << endl;
    cout << "MAX : " << max << endl;
    cout << "MIN : " << min << endl;

    return 0;
}
