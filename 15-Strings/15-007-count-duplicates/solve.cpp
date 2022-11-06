#include <bits/stdc++.h>
using namespace std;

void count_duplicates(string s)
{
    unordered_map<char, int> count;

    for(int i=0; i<s.length(); i++)
        count[s[i]]++;

    // iterating through the unordered map
    for(auto it : count)
    {
        if(it.second > 1)
            cout << it.first << ", count = " << it.second << endl;
    }
}

int main()
{
    string s = "geeksforgeeks";

    count_duplicates(s);
    
    return 0;
}