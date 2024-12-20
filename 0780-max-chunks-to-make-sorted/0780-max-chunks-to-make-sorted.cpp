class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int chunks=0,sum=0,sortedsum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            sortedsum+=i;
            if(sum==sortedsum){
                chunks++;


            }
        }
        return chunks;
        
    }
};