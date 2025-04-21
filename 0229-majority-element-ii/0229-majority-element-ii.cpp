class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int maj1,maj2;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if(nums[i]==maj2){
                count2++;
            }
            else if(count1==0){
                maj1=nums[i];
                count1++;
            }
            else if(count2==0){
                maj2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1){
                c1++;
            }
            else if(nums[i]==maj2){
                c2++;
            }
        }
        vector<int>ans;
        if(c1>n/3){
            ans.push_back(maj1);

        }
        if(c2>n/3){
            ans.push_back(maj2);

        }
        return ans;

        
    }
};