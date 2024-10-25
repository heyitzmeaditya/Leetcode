class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        vector<pair<int,int>> v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int one=0;
                if(i-1>=0 && j-1>=0)one+=board[i-1][j-1];
                if(i-1>=0)one+=board[i-1][j];
                if(i-1>=0 && j+1<n)one+=board[i-1][j+1];
                if(j-1>=0)one+=board[i][j-1];
                if(j+1<n)one+=board[i][j+1];
                if(i+1<m && j-1>=0)one+=board[i+1][j-1];
                if(i+1<m)one+=board[i+1][j];
                if(i+1<m && j+1<n)one+=board[i+1][j+1];
                if(board[i][j]==1){
                    if(one<2)v.push_back({i,j});
                    else if(one>3)v.push_back({i,j});
                }
                else{
                    if(one==3)v.push_back({i,j});
                }
            }
        }
        for(auto it:v){
            board[it.first][it.second]^=1;
        }
    }
}; 