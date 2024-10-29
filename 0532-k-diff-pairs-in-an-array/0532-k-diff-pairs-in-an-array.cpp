class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        int ans = 0;
        int left = 0, right = left + 1;
        
        sort(nums.begin(), nums.end());
        while(right < nums.size())
        {
            if (abs(nums[right] - nums[left]) == k)
            {
                ans++;
                left++;
                right++;
                while (right < nums.size() && nums[right] == nums[right - 1])
                    right++;
            }
            else if (left + 1 != right && abs(nums[right] - nums[left]) > k)
                left++;
            else
                right++;
        }

        return ans;
    }
};