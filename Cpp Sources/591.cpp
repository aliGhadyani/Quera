#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= x - 2; i++)
    {
        cout << "*";
        for (int j = 1; j <= x - 2; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 1; i <= x; i++)
    {
        cout << "*";
    }
}
