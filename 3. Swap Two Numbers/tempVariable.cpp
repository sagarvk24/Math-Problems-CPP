#include <iostream>
using namespace std;

void swapTwoNumbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int number1, number2;
    cout << "Enter two numbers (seperated by whitespace): ";
    cin >> number1 >> number2;

    swapTwoNumbers(number1, number2);

    cout << "Numbers after swapping:" << endl
         << number1 << " " << number2;

    return 0;
}