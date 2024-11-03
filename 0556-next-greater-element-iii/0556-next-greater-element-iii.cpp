class Solution {
public:
    void solve(vector<int>&nums){
      int index=-1;
      int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[index]<nums[i]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
    int nextGreaterElement(int n) {
        string temp=to_string(n);
        vector<int>nums;
        for(int i=0;i<temp.length();i++){
            nums.push_back(temp[i]-'0');
        }
        solve(nums);
        string s="";
        for(int i=0;i<nums.size();i++){
            s+=to_string(nums[i]);
        }
        long long result = stoll(s); 
        return (result > n && result <= INT_MAX) ? result : -1;
    }
};