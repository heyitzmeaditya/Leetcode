class Solution {
public:
    
    int mincost(int n,vector<int>&cost,vector<int>&dp){
        if(n<=1){
            return 0;
        }
       dp[0]=0;
       dp[1]=0;
       for(int i=2;i<n;i++){
        dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
       }
       return min(cost[n-1]+dp[n-1],cost[n-2]+dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return mincost(n,cost,dp);
        
    }
};