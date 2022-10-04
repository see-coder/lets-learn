// helpful reference: (https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/)

#include <bits/stdc++.h>
using namespace std;

struct duet
{
    int A; // repeating number
    int B; // missing number
};

duet find_nums(int arr[], int n)
{
    duet nums;

    for(int i=0; i<n; i++)
    {
        if(arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            nums.A = abs(arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            nums.B = i+1;
            break;
        }
    }
    return nums;
}

int main()
{
    int arr[] = {3, 1, 2, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    duet nums = find_nums(arr, n);
    cout << "Repeating number is " << nums.A << endl;
    cout << "Missing number is " << nums.B;
    
    return 0;
}