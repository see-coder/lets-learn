// Given two numbers say a and b,
// mark the multiples of 2 and 5 between a and b using less than O(|b – a|) space and output each of the multiples.
#include <bits/stdc++.h>
using namespace std;

// index >> 5 corresponds to dividing index by 32
// index & 31 corresponds to modulo operation of index by 32

// Function to check value of bit position whether it is zero or one
bool check_bit(int arr[], int index)
{
    return arr[index >> 5] & (1 << (index & 31));
}

// Sets value of bit for corresponding index
void set_bit(int arr[], int index)
{
    arr[index >> 5] |= (1 << (index & 31));
}

int main()
{
    int a = 2, b = 10;
    int size = abs(b - a) + 1;

    // Size that will be used is actual_size/32
    // ceil is used to initialize the array with positive number
    size = ceil((double)size/32);

    // Array is dynamically initialized as we are calculating size at run time
    int* arr = new int[size];

    for(int i=a; i<=b; i++)
    {
        if(i%2 == 0 || i%5 == 0)
            set_bit(arr, i-a);
    }

    cout << "Multiples of 2 and 5 are:" << endl;
    for(int i=a; i<=b; i++)
    {
        if(check_bit(arr, i-a))
            cout << i << " ";
    }
    
    return 0;
}