#include <iostream>
#include <vector>
using namespace std;

int findConsecutiveOnes(vector<int> &nums)
{
    int maxCount = 0, count = 0;
    for (int n : nums)
    {
        if (n == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 1, 0, 1, 1, 1};
    cout << "The maximum number of consecutive 1's is: " << findConsecutiveOnes(nums);
    return 0;
}