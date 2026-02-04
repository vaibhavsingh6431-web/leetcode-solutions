/*
 * Problem: 121. Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1908257961/
 * Language: c
 * Date: 2026-02-04
 */

int maxProfit(int* prices, int pricesSize) {
    int minPrice =INT_MAX;
    int maxProfit =0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<minPrice)
        minPrice=prices[i];
        if(prices[i]-minPrice>maxProfit){
            maxProfit=prices[i]-minPrice;
        }
    }
    return maxProfit;
}
