#include <bits/stdc++.h>
using namespace std;

int expand(string &s, int l, int r)
{
    int count = 0;

    while(l >= 0 and r < s.size() and s[l--] == s[r++]) count++;

    return count;
}

int count_substrings(string s)
{
    int n = s.size();
    int res = 0;

    for(int i=0; i<n; i++)
    {
        // odd length palindrome count
        res += expand(s, i, i);

        // even length palindrome count
        res += expand(s, i, i+1);
    }
    return res;
}

int main()
{
    string s = "aaa";

    cout << "Total palindromic substrings = " << count_substrings(s);
    
    return 0;
}