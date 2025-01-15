class Solution {
public:
    int commonFactors(int a, int b) {
        int temp=0;
        for(int i=1;i<=max(a,b);i++){
            if(a%i==0 && b%i==0){
                temp++;
            }
        }
        return temp;
        
    }
};