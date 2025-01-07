#include <iostream>
using namespace std;

void swapNumbers(int &num1, int &num2)
{
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

int main()
{
    int number1, number2;
    cout << "Enter two numbers (seperated by whitespace): ";
    cin >> number1 >> number2;

    swapNumbers(number1, number2);

    cout << "Numbers after swapping:" << endl
         << number1 << " " << number2;

    return 0;
}