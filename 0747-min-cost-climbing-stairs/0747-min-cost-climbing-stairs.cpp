class Solution {
public:
    
    int mincost(int n,vector<int>&cost,vector<int>&dp){
        if(n<=1){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n]; 
        }
       return dp[n]=min(cost[n-1]+mincost(n-1,cost,dp),cost[n-2]+mincost(n-2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return mincost(n,cost,dp);
        
    }
};