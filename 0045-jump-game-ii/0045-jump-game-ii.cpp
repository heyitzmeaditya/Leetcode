class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int a=0;
        int ans=0;
        while(a<nums.size()-1){
            ans++;
            a=nums[a];
        }
        return ans;
        
    }
};