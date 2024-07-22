class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minval=arr[0];
        int maxpr=0;
        for(int i=1;i<arr.size();i++){
            minval=min(minval,arr[i]);
            maxpr=max(maxpr,arr[i]-minval);
           
        
        }
        return maxpr;
        
    }
};