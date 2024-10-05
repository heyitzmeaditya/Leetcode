class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans=1;
        for(int j=1; j<=n; j++){
            int mul = 9;
            for(int i=1; i<j; i++){
                mul = mul*(10-i);
            }
            ans = ans + mul;
        }

        return ans;
    }
};