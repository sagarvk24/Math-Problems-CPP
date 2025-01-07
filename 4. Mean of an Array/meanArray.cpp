#include <iostream>
#include <vector>
using namespace std;

double meanOfArray(vector<int> &arr)
{
    if (arr.empty())
        return 0;

    double sum = 0, entries = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        entries += 1;
    }

    return (sum / entries);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    double mean = meanOfArray(nums);

    cout << "Mean(Average) of the array is = " << mean;

    return 0;
}