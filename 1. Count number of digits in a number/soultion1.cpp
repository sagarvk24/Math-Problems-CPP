#include <iostream>
using namespace std;

int countDigits(int &number)
{
    if (number == 0)
        return 1;
    int count = 0;
    while (number > 0)
    {
        number /= 10;
        count += 1;
    }
    return count;
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