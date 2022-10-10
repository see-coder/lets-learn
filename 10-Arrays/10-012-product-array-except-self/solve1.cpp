#include <bits/stdc++.h>
using namespace std;

vector<int> product_except_self(vector<int>& nums)
{
    int n = nums.size();
    vector<int> answer(n);
    vector<int> prefix_product(n);
    vector<int> suffix_product(n);

    prefix_product[0] = 1;
    for(int i=1; i<n; i++)
        prefix_product[i] = prefix_product[i-1] * nums[i-1];
    
    suffix_product[n-1] = 1;
    for(int i=n-2; i>=0; i--)
        suffix_product[i] = suffix_product[i+1] * nums[i+1];
    
    for(int i=0; i<n; i++)
        answer[i] = prefix_product[i] * suffix_product[i];
    
    return answer;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> answer = product_except_self(nums);

    for(auto i : answer)
        cout << i << " ";
      
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)