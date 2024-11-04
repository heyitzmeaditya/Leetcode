class Solution {
    unordered_map<int, char> mp;
public:
    string toHex(int num) {

        if(num == 0) return "0";

        for(int i = 0; i < 10; i++){
            mp[i] = '0'+i;
        }
        for(int i = 10; i < 16; i++){
            mp[i] = 'a'+(i-10);
        }

        long long n = num;
        if(num < 0){
            n = ((long)INT_MAX*2) + 2 + num;
        }

        string str = "";
        while(n){
            int dig = n%16;
            str += mp[dig];
            n /= 16;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};