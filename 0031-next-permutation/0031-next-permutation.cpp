class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size() - 2;
      
        for (int i = n; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        
       
        if (index == -1) {
            reverse(nums.begin(), nums.end());
        } else {
 
            for (int i = nums.size() - 1; i > index; i--) {
                if (nums[i] > nums[index]) {
                    swap(nums[i], nums[index]);
                    break;
                }
            }
            
            reverse(nums.begin() + index + 1, nums.end());
        }
    }
};