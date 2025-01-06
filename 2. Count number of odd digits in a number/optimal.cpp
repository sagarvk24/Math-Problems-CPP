#include <iostream>
using namespace std;

int countOddDigits(int &num)
{
    int oddCount = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        if (lastDigit % 2 != 0)
            oddCount += 1;
        num /= 10;
    }

    return oddCount;
}

int main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int count = countOddDigits(number);
    cout << "The number of odd digits in the number are = " << count;

    return 0;
}