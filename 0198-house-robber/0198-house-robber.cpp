class Solution {
public:
    int robbery(int n,vector<int>&nums){
        if(n<0){
            return 0;
        }
        if(n==0){
            return nums[0];
        }

        int prev2=nums[0],prev1=max(nums[0],nums[1]),curr=prev1;
        for(int i=2;i<=n;i++){
        curr=max(nums[i]+prev2,prev1);
        prev2=prev1;
        prev1=curr;
        }
        return curr;
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        return robbery(n-1,nums);
        
    }
};