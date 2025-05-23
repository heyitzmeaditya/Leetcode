class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       
        int n = nums.size();
        int sum = 0;
        map<int,int>ms;
        
        ms[0] = -1;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(ms.find(sum%k)!=ms.end()){
                
                int foundAt = ms[sum%k];
                if(i-foundAt>=2){
                    return true;
                }
            }
            else{
                ms[sum%k] = i;
            }
        }
        return false;
    }
};