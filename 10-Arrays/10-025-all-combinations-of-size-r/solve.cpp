#include <bits/stdc++.h>
using namespace std;

void combinations_util(int arr[], int n, int r, int index, int data[], int i)
{
    // arr[] ---> Input Array
    // n ---> Size of input array
    // r ---> Size of a combination to be printed
    // index ---> Current index in data[]
    // data[] ---> Temporary array to store current combination
    // i ---> index of current element in arr[]
    
    // Current combination is ready, print it
    if(index == r)
    {
        for(int k=0; k<r; k++)
            cout << data[k] << " ";
        cout << endl;
        return;
    }

    // When no more elements are there to put in data[]
    if(i >= n)
        return;
    
    // current is included, put next at next location
    data[index] = arr[i];
    combinations_util(arr, n, r, index+1, data, i+1);

    // current is excluded, replace it with next (Note that i+1 is passed, but index is not changed)
    combinations_util(arr, n, r, index, data, i+1);
}

void print_combinations(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    int data[r];

    combinations_util(arr, n, r, 0, data, 0);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    print_combinations(arr, n, r);
    
    return 0;
}