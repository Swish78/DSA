int maxProfit(vector<int>& prices) {
        int low = prices[0], curr_profit = 0, ovr_profit = 0;
        for(int  i = 1; i < prices.size(); i++){
            if(prices[i]<low){
                low = prices[i];
            }
            curr_profit = prices[i]-low;
            if(curr_profit > ovr_profit)
                ovr_profit = curr_profit;
        }
        return ovr_profit;
    }
