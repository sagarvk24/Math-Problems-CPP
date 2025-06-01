#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    int flag = 0;

    for(int i=1; i<=sqrt(num);i++)
    {
        if(num%i==0){
            flag+=1;

            if(i != num%i)  flag+=1;
        }
    }

    if(flag==2) return true;

    return false;
}

int countPrimes(int n)
{
    int count=0;
    
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))  count+=1;
    }

    return count;
}

int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    int resultCount = countPrimes(n);

    cout<<resultCount;

    return 0;
}