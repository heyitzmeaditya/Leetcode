class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
           bool dupl=false;
            for(int j=0;j<nums.size();j++){
                if(i!=j&&nums[i]==nums[j]){
                    dupl=true;
                    break;
                }
            }
            if(dupl==false){
                return nums[i];
            }
        }
        return -1;

        
    }
};