class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        map<char,int>cnt;
        for(int i=s.size()-1;i>=0;i--){
            cnt[s[i]]=i;

        }
        for(int i=0;i<s.size();i++){
            if(cnt[s[i]]!=i){
                int x=s[i]-97;
                if(i-cnt[s[i]]-1!=distance[x]){
                    return false;
                }
            }
        }
        return true;

        
    }
};