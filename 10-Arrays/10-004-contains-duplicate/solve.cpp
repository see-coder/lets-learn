#include <bits/stdc++.h>
using namespace std;

bool contains_duplicate(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        if(s.count(arr[i]))
            return true;
        
        s.insert(arr[i]);
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(contains_duplicate(arr, n))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}