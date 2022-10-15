#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int p = start; // set partition index(p) as start initially

    for(int i=start; i<end; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i], arr[p]); // swap if element lesser than pivot
            p++;
        }
    }
    swap(arr[p], arr[end]); // swap pivot with element at partition index
    return p;
}
int quick_select(int arr[], int start, int end, int k)
{
    int p = partition(arr, start, end); // calling partition

    if(p > k)
        return quick_select(arr, start, p-1, k);
    else if(p < k)
        return quick_select(arr, p+1, end, k);
    else
        return arr[p];
}

int find_kth_smallest(int arr[], int start, int end, int k) 
{
    return quick_select(arr, start, end, k-1);
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "K-th smallest element is " << find_kth_smallest(arr, 0, n-1, k);
      
    return 0;
}