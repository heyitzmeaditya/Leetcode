class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        
        while (--n) {
            string t = "";
            int count = 1;
            
            for (int i = 1; i <= s.size(); i++) {
                if (i < s.size() && s[i] == s[i - 1]) {
                    count++;
                } else {
                    t += to_string(count) + s[i - 1];
                    count = 1;
                }
            }
            s = t;
        }
        return s;
    }
};
