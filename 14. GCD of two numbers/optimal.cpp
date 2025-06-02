#include <iostream>
#include <math.h>
using namespace std;

int gcd(int n1, int n2)
{
    // using Euclidean Algorithm
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;

        else
            n2 = n2 % n1;
    }

    if (n1 == 0)
        return n2;
    else
        return n1;
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