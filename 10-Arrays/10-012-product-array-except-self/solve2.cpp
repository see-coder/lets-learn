#include <bits/stdc++.h>
using namespace std;

vector<int> product_except_self(vector<int>& nums)
{
    int n = nums.size();
    vector<int> answer(n);

    int prefix_product = 1;
    for(int i=0; i<n; i++)
    {
        answer[i] = prefix_product;
        prefix_product *= nums[i];
    }
    
    int suffix_product = 1;
    for(int i=n-1; i>=0; i--)
    {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
    }

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
// Space Complexity: O(1)