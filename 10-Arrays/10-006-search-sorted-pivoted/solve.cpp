#include <bits/stdc++.h>
using namespace std;

int search(int nums[], int n, int target)
{
    int l = 0, r = n - 1;

    while(l <= r)
    {
        int mid = (l + r)/2;
        if(target == nums[mid])
            return mid;
        
        // left sorted portion
        if(nums[l] <= nums[mid])
        {
            if(target > nums[mid] || target < nums[l])
                l = mid + 1;
            else
                r = mid - 1;
        }
        // right sorted portion
        else
        {
            if(target < nums[mid] || target > nums[r])
                r = mid - 1;
            else
                l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int n = sizeof(nums)/sizeof(nums[0]);

    cout << "Index of the target is " << search(nums, n, target);
    
    return 0;
}