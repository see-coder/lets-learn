#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int start, int end)
{
    int pivot = nums[end];
    int p = start; // set partition index(p) as start initially

    for(int i=start; i<end; i++)
    {
        if(nums[i] <= pivot)
        {
            swap(nums[i], nums[p]); // swap if element lesser than pivot
            p++;
        }
    }
    swap(nums[p], nums[end]); // swap pivot with element at partition index
    return p;
}
int quick_select(vector<int>& nums, int start, int end, int k)
{
    int p = partition(nums, start, end); // calling partition

    if(p > k)
        return quick_select(nums, start, p-1, k);
    else if(p < k)
        return quick_select(nums, p+1, end, k);
    else
        return nums[p];
}

int find_kth_largest(vector<int>& nums, int k) 
{
    int n = nums.size();
    return quick_select(nums, 0, n-1, n-k);
}

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    cout << "K-th largest element is " << find_kth_largest(nums, k);
      
    return 0;
}