#include <bits/stdc++.h>
using namespace std;

int length_of_longest_substring(string s)
{
    vector<int> dict(256, -1);
    int l=0, r=0;
    int n = s.size();
    int max_len = 0;

    while(r < n)
    {
        if(dict[s[r]] != -1)
            l = max(dict[s[r]]+1, l);
        
        dict[s[r]] = r;

        max_len = max(max_len, r-l+1);
        r++;
    }
    return max_len;
}

int main()
{
    string s = "abcabcbb";

    cout << "length of longest substring = " << length_of_longest_substring(s);
    
    return 0;
}