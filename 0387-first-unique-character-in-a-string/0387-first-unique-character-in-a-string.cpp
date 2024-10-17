class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++){
            char c=s[i];
            bool unique= true;
            for(int j=0;j<s.size();j++){
                if(i!=j&&c==s[j]){
                    unique=false;
                    break;
                }
            }
            if(unique){
            return i;
            }
        }
        return -1;
        
    }
};