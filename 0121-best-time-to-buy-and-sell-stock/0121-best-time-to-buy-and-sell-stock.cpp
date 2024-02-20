class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int n = prices.size();
        int mini = prices[0];
        for(int i = 1; i < n; i++) {
            int profit =  prices[i] - mini;
            if(profit>maxprofit){
                maxprofit=profit;
            }
            if(prices[i]<mini){
                mini=prices[i];
            }
            
        }
        return maxprofit;
    }
};

