#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int &number)
{
    if (number == 0)
        return 1;

    return log10(number) + 1;
}

int main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int count = countDigits(number);
    cout << "The number of digits in the number are = " << count;

    return 0;
}
