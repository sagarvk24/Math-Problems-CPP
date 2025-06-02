#include <iostream>
#include <math.h>
using namespace std;

int lcm(int n1, int n2)
{
    int i = 1;
    int maxNumber = max(n1, n2);

    do
    {
        int multiple = i * maxNumber;

        if (multiple % n1 == 0 && multiple % n2 == 0)
            return multiple;

        i += 1;
    } while (1);

    return -1;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    int lcmOfNumbers = lcm(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is = " << lcmOfNumbers << endl;

    return 0;
}