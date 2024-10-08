class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int>nums;

        set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(nums));
        
    return nums;
    }



};