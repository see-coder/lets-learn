// Approach: Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

int max_subarray_product(int arr[], int n)
{
    int max_ending_here = arr[0];
    int min_ending_here = arr[0];
    int max_so_far = arr[0];

    for(int i=1; i<n; i++)
    {
        int temp = max({ arr[i], arr[i]*max_ending_here, arr[i]*min_ending_here });
        
        min_ending_here = min({ arr[i], arr[i]*max_ending_here, arr[i]*min_ending_here });
        max_ending_here = temp;
        
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

int main()
{
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_product = max_subarray_product(arr, n);
    cout << "Maximum subarray product is " << max_product;
    
    return 0;
}