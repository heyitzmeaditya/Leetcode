class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelset;
        int count=0;
        for(auto jewel:jewels){
            jewelset.insert(jewel);
        }
        for(auto stone:stones){
            if(jewelset.count(stone)){
                count++;
            }
        }
        return count;
        
    }
};