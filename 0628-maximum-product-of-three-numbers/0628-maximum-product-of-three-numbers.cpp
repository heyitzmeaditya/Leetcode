class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int mulpos,mulneg;
        for(int i=0;i<nums.size();i++){
            mulpos=nums[n-2]*nums[n-3]*nums[n-1];
            mulneg=nums[0]*nums[1]*nums[n-1];
        }
        return max(mulpos,mulneg);
    }
};