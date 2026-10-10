#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int SecondLargestElement(vector<int> &nums)
{
    int Largest = INT_MIN, SecondLargest = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > Largest)
        {
            SecondLargest = Largest;
            Largest = nums[i];
        }
        else if (nums[i] > SecondLargest && nums[i] < Largest)
        {
            SecondLargest = nums[i];
        }
    }
    return SecondLargest == INT_MIN ? -1 : SecondLargest;
}

int main()
{
    vector<int> nums = {8,14, 25, 34,16};
    int result = SecondLargestElement(nums);
    cout << "The Second Largest element is : " << result;
    return 0;
}