class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),cSum=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int j=(i+1),k=(n-1);
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target) return sum;
                if(cSum==INT_MAX||(abs(target-sum)<abs(target-cSum))){
                    cSum=sum;
                }
                if(sum<target) j++;
                else if(sum>target) k--;
            }
        }
        return cSum;
    }
};