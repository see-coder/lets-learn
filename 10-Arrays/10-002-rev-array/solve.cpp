#include <iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    int i, temp;
    for(i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse_array(arr, n);
    print_array(arr, n);
    
    return 0;
}