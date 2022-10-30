#include <bits/stdc++.h>
using namespace std;

// Hash Table

// This idea uses a hash table to record the times of appearances of each letter in the two strings s and t.
// For each letter in s, it increases the counter by 1 while for each letter in t, it decreases the counter by 1.
// Finally, all the counters will be 0 if they two are anagrams of each other.

// The first implementation uses the built-in unordered_map.

bool check_anagram(string s, string t)
{
    if(s.length() != t.length())
        return false;
    
    int n = s.length();
    unordered_map<char, int> counts;

    for(int i=0; i<n; i++)
    {
        counts[s[i]]++;
        counts[t[i]]--;
    }
    for(auto count : counts)
    {
        if(count.second)
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