class Solution {
public:
//Insertion Sort
    void sortColors(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            for(int j=i;j>0;j--){
                if(nums[j]<nums[j-1]){
                    swap(nums[j],nums[j-1]);
                }
            }
        }
        
    }
};