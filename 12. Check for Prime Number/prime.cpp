#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    if(num<2)    return false;

    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)    return false;
    }

    return true;
}

int main()
{
    int number; 
    cout<<"Enter a number (to check for prime): ";
    cin>>number;

    bool result = isPrime(number);

    cout<<result;

    return 0;
}