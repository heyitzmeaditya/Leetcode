class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m1;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            m1[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: m1){
            ans.push_back(x.second);
        }
        return ans;
    }
};