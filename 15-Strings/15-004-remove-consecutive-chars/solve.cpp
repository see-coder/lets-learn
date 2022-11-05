#include <bits/stdc++.h>
using namespace std;

string remove_consecutive_chars(string s)
{
    int n = s.length();
    string res = "";

    if(n == 0)
        return res;
    
    for(int i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1])
            res += s[i];
    }
    res.push_back(s[n-1]);
    return res;
}

int main()
{
    string s = "aabcca";

    cout << remove_consecutive_chars(s);
    
    return 0;
}