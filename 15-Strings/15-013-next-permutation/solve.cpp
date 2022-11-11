// helpful reference: (https://www.geeksforgeeks.org/next-permutation/)

#include <bits/stdc++.h>
using namespace std;

void find_next_permutation(vector<int>& nums)
{
    int n = nums.size(), i, j;

    for(i=n-2; i>=0; i--)
    {
        if(nums[i] < nums[i+1])
            break;
    }
    
    if(i < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for(j=n-1; j>i; j--)
        {
            if(nums[j] > nums[i])
                break;
        }
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1, nums.end());
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 6, 5, 4};

    find_next_permutation(nums);

    for(auto i : nums)
        cout << i << " ";
    
    return 0;
}