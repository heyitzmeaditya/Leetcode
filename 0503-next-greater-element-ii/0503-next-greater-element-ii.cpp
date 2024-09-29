class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         int n = nums.size();
        vector<int> str(n, -1);
        stack<int> st;
        for (int i = 0; i < 2 * n; i++) {
            int current = nums[i % n];
            while (!st.empty() && nums[st.top()] < current) {
                str[st.top()] = current;
                st.pop();
            }
            if (i < n) st.push(i);
        }
        return str;
        
    }
};