#include <iostream>
#include <cmath>
using namespace std;

// Function to count digits
int countDigits(int num)
{
    if (num == 0)
        return 1;
    return log10(num) + 1;
}

bool isArmstrongNumber(int num)
{
    int count = countDigits(num);
    int copyNum = num;
    int sum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += round(pow(lastDigit, count));
        num /= 10;
    }

    return (copyNum == sum);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isArmstrongNumber(num))
        cout << "The number is an Armstrong number." << endl;
    else
        cout << "The number is not an Armstrong number." << endl;

    return 0;
}
