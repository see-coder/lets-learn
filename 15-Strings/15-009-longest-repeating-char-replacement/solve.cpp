#include <bits/stdc++.h>
using namespace std;

int character_replacement(string s, int k)
{
    vector<int> dict(26, 0); // to maintain the freq of the occurence of each letter
    int l=0, r=0;
    int n = s.size();
    int max_freq = 0;
    int max_len = 0;

    while(r < n)
    {
        dict[s[r] - 'A']++;
        max_freq = max(max_freq, dict[s[r] - 'A']); // maximum letter freq encountered so far

        if(r-l+1 - max_freq > k) // when condition violates
        {
            dict[s[l] - 'A']--;
            l++;
        }
        max_len = max(max_len, r-l+1); // maximum window length that satifies the condition
        r++;
    }
    return max_len;
}

int main()
{
    string s = "AABABBA";
    int k = 1;

    cout << "length of longest substring = " << character_replacement(s, k);
    
    return 0;
}