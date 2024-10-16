class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        priority_queue<int> p;
        for (int i = 0; i < a.size(); i++)
            p.push(a[i]);

        while (k != 1) {
            k--;
            p.pop();
        }
        return p.top();
    }
};