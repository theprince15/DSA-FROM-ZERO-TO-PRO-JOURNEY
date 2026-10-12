#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums){
    int insertPos=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            swap(nums[i],nums[insertPos]);
            insertPos++;
        }
    }
}

int main(){
    vector<int> nums = {0, 1, 4, 0, 5, 2};
    moveZeroes(nums);
    cout << "Array after moving zeroes:";
    for(int n : nums)
        cout << " " << n;
    return 0;
}