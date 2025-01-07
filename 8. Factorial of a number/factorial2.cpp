#include <iostream>
using namespace std;

long long factorialNum(int num)
{
    if (num == 0)
        return 1;
    if (num < 0)
    {
        cout << "Factorial is undefined for negative numbers!" << endl;
        return -1; // Return -1 as an error code
    }

    int fact = 1;

    while (num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}

int main()
{
    int number;
    cout << "Enter a number = ";
    cin >> number;

    long long fact = factorialNum(number);

    cout << "Factorial = " << fact;

    return 0;
}