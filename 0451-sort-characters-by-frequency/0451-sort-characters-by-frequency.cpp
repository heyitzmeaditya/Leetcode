class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<vector<int>>ans;
        for(auto i:mp){
            ans.push_back({i.second,(int)i.first});
        }
        sort(ans.rbegin(),ans.rend());
        string res="";
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i][0];j++){
                res+=(char)ans[i][1];
            }
        }
        return res;

        
    }
};