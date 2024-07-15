class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int buy = prices[0];
        for(int i =0; i<prices.size(); i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            else if(prices[i]-buy>maxpro){
                maxpro = prices[i]-buy;
            }
        }

        return maxpro;
        
    }
};