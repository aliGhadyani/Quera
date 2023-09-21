#include <iostream>

using namespace std;

int takRaghami(long long int input)
{
    int sum = 0;

    while (input > 0)
    {
        sum = sum + (input % 10);
        input /= 10;
    }

    if (sum > 9)
        sum = takRaghami(sum);

    return sum;
}

int main()
{
    long long int userInput;

    cin >> userInput;

    int output;

    output = takRaghami(userInput);

    cout << output;
    return 0;
}
