#include <bits/stdc++.h>
using namespace std;

// Sorting

// For two anagrams, once they are sorted in a fixed order, they will become the same.
// This code is much shorter, but it takes much longer time.

bool check_anagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
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