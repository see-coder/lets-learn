#include <bits/stdc++.h>
using namespace std;

int find_min_diff(int arr[], int n, int m)
{
    // Sort the given packets
    sort(arr, arr + n);

    int min_diff = INT_MAX;

    for(int i=0; i<=n-m; i++)
    {
        int curr_diff = arr[i+m-1] - arr[i];
        
        if(curr_diff < min_diff)
            min_diff = curr_diff;
    }
    return min_diff;
}

int main()
{
    int arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int m = 7; // Number of students
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Minimum difference is " << find_min_diff(arr, n, m);
    
    return 0;
}