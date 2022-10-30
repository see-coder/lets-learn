#include <bits/stdc++.h>
using namespace std;

// Since the problem statement says that "the string contains only lowercase alphabets",
// we can simply use an array to simulate the unordered_map and speed up the code.

bool check_anagram(string s, string t)
{
    if(s.length() != t.length())
        return false;
    
    int n = s.length();
    int counts[26] = {0};

    for(int i=0; i<n; i++)
    {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    for(int i=0; i<26; i++)
    {
        if(counts[i])
            return false;
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    if(check_anagram(s, t))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}