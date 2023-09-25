#include <iostream>

using namespace std;

int main()
{
    float weight = 0;
    cin >> weight;
    float height = 0;
    cin >> height;

    float bmi = weight / (height * height);
    if (bmi < 18.5)
    {
        cout.precision(2);
        cout << fixed << bmi;
        cout << endl
             << "Underweight";
    }
    else if (bmi < 25 && bmi > 18.5)
    {
        cout.precision(2);
        cout << fixed << bmi;
        cout << endl
             << "Normal";
    }
    else if (bmi < 30 && bmi > 25)
    {
        cout.precision(2);
        cout << fixed << bmi;
        cout << endl
             << "Overweight";
    }
    else
    {
        cout.precision(2);
        cout << fixed << bmi;
        cout << endl
             << "Obese";
    }
    return 0;
}
