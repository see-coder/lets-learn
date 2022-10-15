#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> three_sum(vector<int>& nums)
{
    sort(nums.begin(), nums.end());

    vector<vector<int>> res;

    // moves for first number
    for(int i=0; i<nums.size()-2; i++)
    {
        if(i == 0 || (i > 0 && nums[i] != nums[i-1]))
        {
            int l = i+1;
            int r = nums.size()-1;

            while(l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                
                if(sum == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);

                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;

                    l++;
                    r--;
                }
                else if(sum < 0)
                    l++;
                else
                    r--;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> nums =  {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res;

    res = three_sum(nums);

    for(auto i : res)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}