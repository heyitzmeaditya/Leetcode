class Solution {
public:
    bool search(vector<int>& nums, int target) {
        auto it=std::find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            return true;
        }
        else{
            return false;
        }
        
    }
};