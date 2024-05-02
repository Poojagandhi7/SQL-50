class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int maxprofit = 0;
        
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                maxprofit += prices[i] -prices[i-1];
                
            }
        }
        return maxprofit;
        
//         int n = prices.size();
//         int min = prices[0];
//         int profit = 0,maxprofit=0;
        
//         for(int i=1;i<n;i++){
//             if(prices[i] > min){
//                 profit = prices[i] - min;
//             }
//             min = prices[i+1];
//             maxprofit +=profit;
//         }
//         return maxprofit;
        
    }
};