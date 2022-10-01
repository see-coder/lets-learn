#include <iostream>
using namespace std;

struct duet
{
    int min;
    int max;
};

duet find_min_max(int arr[], int n)
{
    duet min_max;
    min_max.min = arr[0];
    min_max.max = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i] > min_max.max)
            min_max.max = arr[i];
        if(arr[i] < min_max.min)
            min_max.min = arr[i];
    }
    return min_max;
}

int main()
{
    int arr[] = {22, 14, 8, 17, 35, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    duet min_max = find_min_max(arr, n);
    cout << "Minimum element is " << min_max.min << endl;
    cout << "Maximum element is " << min_max.max;
    
    return 0;
}