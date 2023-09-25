#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int x = str.size();
    for (int j = 0; j <= x - 1; j++)
    {
        for (int i = j; i >= 0; i--)
        {
            str[i] = str[j];
        }
        cout << str << endl;
    }
    return 0;
}
