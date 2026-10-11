#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArrayByKPlaces(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0)
        return;
    k = k % n;
    if (k < 0)
        k += n;
    
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {3, 4, 1, 5, 3, -5};
    int k = 8;
    rotateArrayByKPlaces(nums, k);
    for (int n : nums)
        cout << n << " ";
    return 0;
}