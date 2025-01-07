#include <iostream>
using namespace std;

int largestDigit(int &number)
{
    int largest = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        if (lastDigit > largest)
            largest = lastDigit;
        number /= 10;
    }

    return largest;
}

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int largest = largestDigit(num);

    cout << "Largest Digit in the number is = " << largest;

    return 0;
}