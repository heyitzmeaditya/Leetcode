class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix[0].size(),n=matrix.size();
        int direc=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        int x=0,y=0,pass=1;

        while(pass!=3){
            if(vis[x][y]!=1){
                ans.push_back(matrix[x][y]);
                vis[x][y]=1;
                pass=1;
            }
            else pass++;
            
            if(direc==0) {
                if(y+1<m && vis[x][y+1]==0) y=y+1;
                else direc=1;
            }
            
            else if(direc==1){
                if(x+1<n && vis[x+1][y]==0) x=x+1;
                else direc=2;
            }
            
            else if(direc==2){
                if(y-1>=0 && vis[x][y-1]==0) y=y-1;
                else direc=3;
            }
            
            else{
                if(x-1>=0 && vis[x-1][y]==0) x=x-1;
                else direc=0;
            }
        }
        return ans;
    }
};