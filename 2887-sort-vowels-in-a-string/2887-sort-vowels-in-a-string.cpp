class Solution {
public:
    string sortVowels(string s) {
        vector<int>upper(26,0);
        vector<int>lower(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }

        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }

        }

        string vowel;
        for(int i=0;i<26;i++){
            char ch='A'+i;
            while(upper[i]){
                vowel+=ch;
                upper[i]--;
            }

        }

        for(int i=0;i<26;i++){
            char ch='a'+i;
            while(lower[i]){
                vowel+=ch;
                lower[i]--;
            }

        }
         
        int first=0;int second=0;
        while(second<vowel.size()){
            if(s[first]=='#'){
                s[first]=vowel[second];
                second++;
            }
            first++;
        }
        return s;


        
    }
};