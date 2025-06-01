#include <iostream>
#include <math.h>
using namespace std;

bool isPerfectNumber(int num)
{
    if (num <= 1)
        return false;

    int sum = 1;

    int square = sqrt(num);

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            sum += i;

            if (i != num / i && num != num / i)
                sum += num / i;
        }
    }

    return sum == num;
}

int main()
{
    int number;

    cout << "Enter a number (to check whether it is perfect or not): ";
    cin >> number;

    bool result = isPerfectNumber(number);

    cout << result;

    return 0;
}