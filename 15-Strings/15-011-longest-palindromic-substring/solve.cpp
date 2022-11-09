#include <bits/stdc++.h>
using namespace std;

/*
    --> For each character, consider center and expand on both sides to find maximum length of palindrome.

    --> Two possibilities of center,
        - For odd length palindrome, center = i
        - For even length palindrome, center = i to i+1
    
    --> Length = right - left - 1
*/

int expand(string &s, int l, int r)
{
    while(l >= 0 and r < s.size() and s[l] == s[r])
    {
        l--;
        r++;
    }
    return r-l-1;
}

string longest_palindrome(string s)
{
    int n = s.size();
    int start = 0, max_len = 0;

    for(int i=0; i<n; i++)
    {
        int odd_len = expand(s, i, i);
        int even_len = expand(s, i, i+1);

        int len = max(odd_len, even_len);

        if(len > max_len)
        {
            max_len = len;
            start = i - ((max_len-1)/2);
        }
    }
    string res = s.substr(start, max_len);
    return res;
}

int main()
{
    string s = "babad";

    string res = longest_palindrome(s);
    cout << res << endl;
    
    return 0;
}