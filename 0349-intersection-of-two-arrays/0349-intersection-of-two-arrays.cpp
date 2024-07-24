class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int>nums;

        set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(nums));

        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1||nums[i]!=nums[i+1]){
                result.push_back(nums[i]);
            }
        }
        return result;
        
    }
};