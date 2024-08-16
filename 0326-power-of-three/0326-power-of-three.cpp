class Solution {
public:
    bool isPowerOfThree(int n) {
        double x=(double)n;
        while(1){
        if(x==1){
            return true;

        }
        else if(x<=0){
            return false;
        }
        x=x/3;
        }
        return false;
        
    }
};