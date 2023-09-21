#include <iostream>

using namespace std;

int main()
{
    int shah, vazir, rokh, fil, asb, sarbaz;

    cin >> shah >> vazir >> rokh >> fil >> asb >> sarbaz;

    if (shah == 1)
    {
        cout << 0 << " ";
    }
    else
    {
        if (shah < 0)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 1 - shah << " ";
        }
    }

    if (vazir == 1)
    {
        cout << 0 << " ";
    }
    else
    {
        if (vazir < 0)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 1 - vazir << " ";
        }
    }

    if (rokh == 2)
    {
        cout << 0 << " ";
    }
    else
    {
        if (rokh < 0)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << 2 - rokh << " ";
        }
    }

    if (fil == 2)
    {
        cout << 0 << " ";
    }
    else
    {
        if (fil < 0)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << 2 - fil << " ";
        }
    }

    if (asb == 2)
    {
        cout << 0 << " ";
    }
    else
    {
        if (asb < 0)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << 2 - asb << " ";
        }
    }

    if (sarbaz == 8)
    {
        cout << 0 << " ";
    }
    else
    {
        if (sarbaz < 0)
        {
            cout << 8 << " ";
        }
        else
        {
            cout << 8 - sarbaz << " ";
        }
    }
}
