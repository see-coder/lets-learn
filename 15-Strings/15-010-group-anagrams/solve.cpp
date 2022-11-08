#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> group_anagrams(vector<string>& strs)
{
    vector<vector<string>> res;

    unordered_map<string, vector<string>> dict;

    /*
        Consider example 1 : strs = ["eat","tea","tan","ate","nat","bat"]
        
        After the below opeartion of for loop map will contain

        aet -- eat, tea, ate
        ant -- tan, nat
        abt -- bat
    */

    for(auto s : strs)
    {
        string temp = s;
        sort(s.begin(), s.end());
        dict[s].push_back(temp);
    }

    // now simply put the elements of second column of map in res

    for(auto s : dict)
    {
        res.push_back(s.second);
    }
    return res;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> res = group_anagrams(strs);

    for(auto i : res)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}