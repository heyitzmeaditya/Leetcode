class Solution {
public:
    int reverse(int x) {
        long ans=0;int rem;
        
        while(x!=0){
            rem=x%10;
            x=x/10;
            ans=ans*10+rem;
            if(ans>INT_MAX||ans<INT_MIN){
            return 0;
        }
        }
        return int(ans);
        

    }
};