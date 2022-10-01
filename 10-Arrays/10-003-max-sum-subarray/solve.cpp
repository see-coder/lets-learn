// Kadane's Algorithm

#include <iostream>
using namespace std;

int max_subarray_sum(int arr[], int n)
{
    int max_sum_so_far = arr[0];
    int max_sum_ending_here = 0;

    for(int i=0; i<n; i++)
    {
        max_sum_ending_here = max_sum_ending_here + arr[i];

        if(max_sum_so_far < max_sum_ending_here)
            max_sum_so_far = max_sum_ending_here;
        
        if(max_sum_ending_here < 0)
            max_sum_ending_here = 0;
    }
    return max_sum_so_far;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_sum = max_subarray_sum(arr, n);
    cout << "Maximum contiguous sum is " << max_sum;
    
    return 0;
}