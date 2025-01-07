#include <iostream>
using namespace std;

bool palindromeCheck(int &num)
{
    int temp = num;
    int revNum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        revNum = (revNum * 10) + lastDigit;
        num /= 10;
    }

    if (temp == revNum)
        return true;

    else
        return false;
}

int main()
{
    int number;
    cout << "Enter a number = ";
    cin >> number;

    bool palindromeOrNot = palindromeCheck(number);

    cout << "The given number is palindrome or not:" << endl
         << palindromeOrNot;

    return 0;
}