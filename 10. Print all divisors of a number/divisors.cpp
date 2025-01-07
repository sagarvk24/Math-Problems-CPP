#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> divisors(int num)
{
    vector<int> ans;
    if (num == 0)
        return ans;

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            ans.push_back(i);

            if (num / i != i)
                ans.push_back(num / i);
        }
    }

    return ans;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> result = divisors(num);

    cout << "Divisors of " << num << " are:" << endl;
    for (int num : result)
        cout << num << " ";

    return 0;
}