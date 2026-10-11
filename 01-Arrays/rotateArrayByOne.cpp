#include <iostream>
#include <vector>
using namespace std;

void rotateArrayByOne(vector<int> &nums)
{
    if (nums.empty())
        return;
    int first = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[nums.size() - 1] = first;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    rotateArrayByOne(nums);
    for (int n : nums)
        cout << n << " ";
    return 0;
}
