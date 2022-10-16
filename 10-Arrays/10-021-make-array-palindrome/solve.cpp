#include <bits/stdc++.h>
using namespace std;

int min_merge_ops(int arr[], int n)
{
    int count = 0;
    int i = 0, j = n - 1;

    while(i < j)
    {
        if(arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if(arr[i] < arr[j])
        {
            i++;
            arr[i] += arr[i-1];
            count++;
        }
        else
        {
            j--;
            arr[j] += arr[j+1];
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 4, 5, 9, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min_ops = min_merge_ops(arr, n);
    cout << "Count of minimum operations is " << min_ops;
    
    return 0;
}