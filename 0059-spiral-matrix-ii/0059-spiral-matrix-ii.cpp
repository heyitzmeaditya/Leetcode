class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int> (n));
        int top=0,bottom=n-1;
        int left=0,right=n-1;
        int j=1;
        while(left<=right && top<=bottom){
            if(top<=bottom)
            for(int i=left;i<=right;i++){
                v[top][i]=j++;
            }
            top++;
            if(left<=right)
            for(int i=top;i<=bottom;i++){
                v[i][right]=j++;
            }
            right--;
            if(top<=bottom)
            for(int i=right;i>=left;i--){
                v[bottom][i]=j++;
            }
            bottom--;
            if(left<=right)
            for(int i=bottom;i>=top;i--){
                v[i][left]=j++;
            }
            left++;
        
        }
        return v;
    }
};