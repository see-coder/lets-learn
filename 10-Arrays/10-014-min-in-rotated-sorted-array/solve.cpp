#include <bits/stdc++.h>
using namespace std;

int find_min(vector<int>& nums)
{
    int l = 0;
    int r = nums.size() - 1;

    while(l < r)
    {
        int mid = (l + r)/2;

        if(nums[mid] < nums[r])
            r = mid;
        else
            l = mid + 1;
    }
    return nums[l];
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Minimum element is " << find_min(nums);
    
    return 0;
}