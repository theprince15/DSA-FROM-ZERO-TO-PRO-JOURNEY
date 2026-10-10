#include <iostream>
#include <vector>
using namespace std;

int LargestElement(vector<int> &nums)
{
    int Largest = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > Largest)
        {
            Largest = nums[i];
        }
    }
    return Largest;
}

int main()
{
    vector<int> nums = {-13, -33,-3, -30,-20, -40};
    int result = LargestElement(nums);
    cout << "The Largest element is: " << result;
}