#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < prices.size(); i++) {
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}