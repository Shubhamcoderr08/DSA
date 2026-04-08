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


// brute force with T.C : O(n^2)




// int main() {
//     vector<int> prices = {7, 1, 5, 3, 6, 4};
//      int n = prices.size();
//         int maxProfit  = 0;
//          for(int i =0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(prices[j]-prices[i]>maxProfit) {
//                     maxProfit = prices[j] - prices[i];
//                 }
//             }
//          }

//          return maxProfit;

// }