#include <bits/stdc++.h>
using namespace std;

int my_compare(string x, string y)
{
    // first append Y at the end of X
    string xy = x.append(y);

    // then append X at the end of Y
    string yx = y.append(x);

    // Now see which of the two formed numbers is greater
    return xy.compare(yx) > 0 ? 1 : 0;
}

string largest_number(vector<string>& arr)
{
    // sort function uses our comparison function my_compare() to compare two strings.
    sort(arr.begin(), arr.end(), my_compare);

    string ans = "";
    for(auto &e : arr)
        ans += e;
    
    return ans;
}

int main()
{
    vector<string> arr = {"54", "546", "548", "60"};

    string ans = largest_number(arr);
    cout << ans << endl;
    
    return 0;
}