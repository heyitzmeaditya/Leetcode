class Solution {
public:
vector<vector<int>>ans;
map<vector<int>,int>mp;
vector<int>curr;
void rec(int k,vector<int>& c,int sum,int x){
    if(sum==x){
        if(mp.find(curr)==mp.end()){
            ans.push_back(curr);
            mp[curr]++;
        }
        return ;
    }
    for(int i=k;i<c.size();i++){
        if(sum+c[i]<=x){
            curr.push_back(c[i]);
            rec(i,c,sum+c[i],x);
            curr.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        rec(0,c,0,t);
        return ans;

        
    }
};