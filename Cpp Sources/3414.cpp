#include <iostream>

using namespace std;

int main()
{
    int x[2];
    int y[2];
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    if (y[1] == y[0])
    {
        cout << "Horizontal";
    }
    else if (x[0] == x[1])
    {
        cout << "Vertical";
    }
    else
    {
        cout << "Try again";
    }
    return 0;
}
