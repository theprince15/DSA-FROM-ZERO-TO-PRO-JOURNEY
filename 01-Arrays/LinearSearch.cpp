#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> &nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 3, 4, 5, 3};
    int target = 9;
    int result = LinearSearch(nums, target);
    cout << "The element found at: " << result;
    return 0;
}
