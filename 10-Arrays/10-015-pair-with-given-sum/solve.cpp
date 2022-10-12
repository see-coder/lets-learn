#include <bits/stdc++.h>
using namespace std;

bool has_pair_sum(int arr[], int n, int x)
{
    // find the pivot element
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] > arr[i+1])
            break;
    }
     
    // l is now index of smallest element
    int l = (i + 1) % n;

    // r is now index of largest element
    int r = i;

    while(l != r)
    {
        if(arr[l] + arr[r] == x)
            return true;
        
        if(arr[l] + arr[r] < x)
            l = (l + 1) % n;
        else
            r = (n + r - 1) % n;
    }
    return false;
}

int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int X = 16;
    int N = sizeof(arr)/sizeof(arr[0]);

    if(has_pair_sum(arr, N, X))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}