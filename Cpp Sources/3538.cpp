#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hafte[7] = {"shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome"};
    // shakhs aval
    int x1;
    cin >> x1;
    string shakhs1[x1];
    for (int i = 0; i < x1; i++)
    {
        cin >> shakhs1[i];
    }
    // shakhs dovom
    int x2;
    cin >> x2;
    string shakhs2[x2];
    for (int i = 0; i < x2; i++)
    {
        cin >> shakhs2[i];
    }
    // shakhs sevom
    int x3;
    cin >> x3;
    string shakhs3[x3];
    for (int i = 0; i < x3; i++)
    {
        cin >> shakhs3[i];
    }

    for (int i = 0; i < x1; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (shakhs1[i] == hafte[j])
            {
                hafte[j] = "0";
            }
        }
    }
    for (int i = 0; i < x2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (shakhs2[i] == hafte[j])
            {
                hafte[j] = "0";
            }
        }
    }
    for (int i = 0; i < x3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (shakhs3[i] == hafte[j])
            {
                hafte[j] = "0";
            }
        }
    }

    int count = 7;

    for (int i = 0; i < 7; i++)
    {
        if (hafte[i] == "0")
        {
            count--;
        }
    }

    cout << count;

    return 0;
}
