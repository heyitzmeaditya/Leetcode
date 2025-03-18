class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy=prices[0];
        int maxp=0;
        for(int i=0;i<prices.size();i++){
            minbuy=min(minbuy,prices[i]);
            maxp=max(maxp,prices[i]-minbuy);
        }
        return maxp;
    }
};