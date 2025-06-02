#include <iostream>
#include <math.h>
using namespace std;

int gcd(int n1, int n2)
{
    int gcd;

    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    return gcd;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    int gcdOfNumbers = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is = " << gcdOfNumbers << endl;

    return 0;
}