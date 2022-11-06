#include <bits/stdc++.h>
using namespace std;

string longest_common_prefix(vector<string>& strs)
{
    string res = "";

    sort(strs.begin(), strs.end());

    for(int i=0; i<strs[0].size(); i++)
    {
        if(strs[0][i] != strs[strs.size()-1][i])
            return res;

        res += strs[0][i];
    }
    return res;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    string res = longest_common_prefix(strs);
    cout << res << endl;
    
    return 0;
}