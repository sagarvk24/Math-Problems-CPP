#include <iostream>
using namespace std;

long long factorial(int num)
{
    if (num < 0)
    {
        cout << "Factorial is undefined for negative numbers!" << endl;
        return -1; // Return -1 as an error code
    }
    if (num == 0)
        return 1;
    if (num == 1)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int number;
    cout << "Enter the number = ";
    cin >> number;

    long long fact = factorial(number);

    cout << "The factorial of " << number << " = " << fact;

    return 0;
}