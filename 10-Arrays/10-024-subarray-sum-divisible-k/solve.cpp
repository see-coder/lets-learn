#include <bits/stdc++.h>
using namespace std;

// function to find the longest subarray with sum divisible by k
int longest_subarray_length(int arr[], int n, int k)
{
    // unordered map 'um' implemented as hash table
    unordered_map<int, int> um;
    
    int max_len = 0;
    int curr_sum = 0;

    for(int i=0; i<n; i++)
    {
        curr_sum += arr[i];

        int mod = ((curr_sum % k) + k) % k;

        // if true then sum(0..i) is divisible by k
        if(mod == 0)
        {
            // update 'max_len'
            max_len = i + 1;
        }
        // if value 'mod_arr[i]' not present in 'um' then store it in 'um' with index of its first occurrence
        else if(um.find(mod) == um.end())
        {
            um[mod] = i;
        }
        else
        {
            // if true, then update 'max_len'
            if(max_len < (i - um[mod]))
                max_len = i - um[mod];
        }
    }
    return max_len;
}

int main()
{
    int arr[] = {2, 7, 6, 1, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    cout << "Length = " << longest_subarray_length(arr, n, k);
    
    return 0;
}