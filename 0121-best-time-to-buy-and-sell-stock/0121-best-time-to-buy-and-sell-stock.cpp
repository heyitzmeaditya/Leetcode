class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minbuy=arr[0];
        int maxpr=0;
        for(int i=1;i<arr.size();i++){
            minbuy=min(arr[i],minbuy);
            maxpr=max((arr[i]-minbuy),maxpr);
        }
        return maxpr;
        
    }
};