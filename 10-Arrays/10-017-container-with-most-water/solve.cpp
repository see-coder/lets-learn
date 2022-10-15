#include <bits/stdc++.h>
using namespace std;

int find_max_area(vector<int>& height)
{
    int l = 0;
    int r = height.size() - 1;
    int max_area = 0;

    while(l < r)
    {
        int curr_area = (r - l) * min(height[l], height[r]);
        max_area = max(max_area, curr_area);

        if(height[l] < height[r])
            l++;
        else
            r--;
    }
    return max_area;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Max area of water is " << find_max_area(height);
    
    return 0;
}