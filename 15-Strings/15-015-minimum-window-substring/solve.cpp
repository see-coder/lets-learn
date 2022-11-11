#include <bits/stdc++.h>
using namespace std;

string min_window_substr(string s, string t)
{
    int dict[256] = {0};

    int ans = INT_MAX; // length of ans
    int start = 0; // starting index of ans
    int count = 0;

    // creating map
    for(int i=0; i<t.length(); i++)
    {
        if(dict[t[i]] == 0)
            count++;
        dict[t[i]]++;
    }

    // References of Window
    int i = 0;
    int j = 0;

    // Traversing the window
    while(j < s.length())
    {
        // Calculations
        dict[s[j]]--;
        if(dict[s[j]] == 0)
            count--;
        
        // Condition matching
        if(count == 0)
        {
            while(count == 0)
            {
                // Sorting ans
                if(ans > j-i+1)
                {
                    ans = j-i+1;
                    start = i;
                }

                // Sliding i
                // Calculation for removing i
                dict[s[i]]++;
                if(dict[s[i]] > 0)
                    count++;
                
                i++;
            }
        }
        j++;
    }
    if(ans != INT_MAX)
        return s.substr(start, ans);
    else
        return "";
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    string ans = min_window_substr(s, t);
    cout << ans << endl;
    
    return 0;
}