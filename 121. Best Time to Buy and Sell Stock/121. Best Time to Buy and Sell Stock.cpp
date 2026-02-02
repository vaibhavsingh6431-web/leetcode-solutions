/*
 * Problem: 121. Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1905867199/
 * Language: cpp
 * Date: 2026-02-02
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit=0, bestBuy=prices[0];
         for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxProfit =max(maxProfit,prices[i]-bestBuy);

            }
            bestBuy=min(bestBuy,prices[i]);
         }
         return maxProfit;
    }
};
