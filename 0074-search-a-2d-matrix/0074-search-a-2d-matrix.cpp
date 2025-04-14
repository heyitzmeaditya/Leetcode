class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int msize=m*n-1;
        int start=0;
        int end=msize;
        int mid;
        
            
            while(start<=end){
                mid=start+(end-start)/2;
                if(target==matrix[mid/n][mid%n]){
                    return true;
                }
                else if(target<matrix[mid/n][mid%n]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        
        return false;
        
    }
};