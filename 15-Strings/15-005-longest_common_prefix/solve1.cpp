#include <bits/stdc++.h>
using namespace std;

string longest_common_prefix(vector<string>& strs)
{
    string res = "";

    for(int i=0; i<strs[0].size(); i++)
    {
        for(int j=1; j<strs.size(); j++)
        {
            if(strs[0][i] != strs[j][i])
                return res;
        }
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