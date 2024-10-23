class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(nums);
        sort(ans.begin(),ans.end());
        int start=0;
        int end=ans.size()-1;
        while(start<end){
            if(ans[start]+ans[end]==target){
                break;
            }
            else if(ans[start]+ans[end]>target){
                end--;
            }
            else{
                start++;
            }

        }
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(ans[start]==nums[i]){
                res.push_back(i);
            }
            else if(ans[end]==nums[i]){
                res.push_back(i);
            }
        }
        return res;
        
    }
};