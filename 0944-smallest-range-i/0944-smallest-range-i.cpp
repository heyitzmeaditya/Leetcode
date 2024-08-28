class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return 0;
        }

        int min=nums[0];
        for(int i=0;i<n;i++){
            if(min > nums[i]){
                min=nums[i];
            }
        }

        int max=nums[0];
        for(int i=0;i<n;i++){
            if(max < nums[i]){
                max=nums[i];
            }
        }

       

        max=max-k;
        min=min+k;

        int diff = (max-min);

        if(diff < 0){
            return 0;
        }
        else{
            return diff;
        }
        
    }
};