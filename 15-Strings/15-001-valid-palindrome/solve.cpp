#include <bits/stdc++.h>
using namespace std;

bool check_alphanumeric(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

bool check_palindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int l = 0;
    int r = s.length() - 1;

    while(l < r)
    {
        if(!check_alphanumeric(s[l]))
            l++;
        else if(!check_alphanumeric(s[r]))
            r--;
        else
        {
            if(s[l] == s[r])
            {
                l++;
                r--;
            }
            else
                return false;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if(check_palindrome(s))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}