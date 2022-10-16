#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge_intervals(vector<vector<int>>& intervals)
{
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    for(auto interval : intervals)
    {
        if(merged.empty() || merged.back()[1] < interval[0])
        {
            merged.push_back(interval);
        }
        else
        {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> res;

    res = merge_intervals(intervals);

    for(auto interval : res)
    {
        cout << interval[0] << " " << interval[1] << endl;
    }
    
    return 0;
}