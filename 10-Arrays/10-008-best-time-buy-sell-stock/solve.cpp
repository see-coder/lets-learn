#include <iostream>
using namespace std;

int find_max_profit(int prices[], int n)
{
    int l = 0, r = 1; // left = buy, right = sell
    int max_profit = 0;

    while(r < n)
    {
        // profitable ?
        if(prices[l] < prices[r])
        {
            int curr_profit = prices[r] - prices[l];
            if(curr_profit > max_profit)
                max_profit = curr_profit;
        }
        else
        {
            l = r;
        }
        r += 1;
    }
    return max_profit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(prices[0]);

    int max_profit = find_max_profit(prices, n);
    cout << "Max profit is " << max_profit;
    
    return 0;
}