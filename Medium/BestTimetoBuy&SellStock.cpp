#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    if(prices.size()==1) return 0;
        
        int min_profit = INT_MAX;
        int max_profit=0;
        for(auto num : prices){
            min_profit=min(min_profit,num);
            max_profit=max(max_profit,num-min_profit);
        }
     return max_profit;
}