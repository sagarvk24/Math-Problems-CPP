#include <iostream>
using namespace std;

int reverseNumber(int &num)
{
    int reverseNum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        num /= 10;
    }
    return reverseNum;
}

int main()
{
    int number;
    cout << "Enter any number = ";
    cin >> number;

    int reversed = reverseNumber(number);

    cout << "Reversed Number is = " << reversed;

    return 0;
}