class Solution {
public:
    int robber(int start,int end,vector<int>&nums){
        if(start==end){
            return nums[start];
        }
        int prev2=nums[start],prev1=max(nums[start],nums[start+1]);
        int curr1=prev1;
        for(int i=start+2;i<=end;i++){
            curr1=max(nums[i]+prev2,prev1);
            prev2=prev1;
            prev1=curr1;

        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        return max(robber(1,n-1,nums),robber(0,n-2,nums));
        
    }
};