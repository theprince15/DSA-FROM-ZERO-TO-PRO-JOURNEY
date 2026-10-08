## Today's Learning: Declaring Arrays Dynamically Using Vectors

**Syntax:**
```cpp
vector<int> nums = {1, 2, 3, 4, 5};
```

When passing a vector to a function, we pass it by reference instead of passing the entire array, since copying a large number of elements would be costly in terms of time and memory.

**Syntax:**
```cpp
void functionName(vector<int> &nums) {
    // nums now refers to the original vector, not a copy
}
```

For both strings and vectors (arrays), we use the `size()` function to get their length.

For strings only, we also have the `length()` function, which behaves identically to `size()`.

Problem Statement:

 Linear Search
Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1

Example 1:
Input: nums = [2, 3, 4, 5, 3], target = 3

Output: 1

Explanation:

The first occurence of 3 in nums is at index 1

Example 2:
Input: nums = [2, -4, 4, 0, 10], target = 6

Output: -1

Explanation:

The value 6 does not occur in the array, hence output is -1