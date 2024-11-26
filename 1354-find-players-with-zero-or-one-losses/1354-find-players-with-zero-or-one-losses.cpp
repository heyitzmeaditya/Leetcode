class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>lm;
        for(int i=0;i<matches.size();i++){
            
                int loser=matches[i][1];
                lm[loser]++;
        }
            vector<int>notLost;
            vector<int>lostOnce;
            for(int i=0;i<matches.size();i++){
                int winner=matches[i][0];
                int loser=matches[i][1];

                if(lm.find(winner)==lm.end()){
                    notLost.push_back(winner);
                    lm[winner]=2;
                }
                if(lm[loser]==1){
                    lostOnce.push_back(loser);
                }

            }
        
            sort(lostOnce.begin(),lostOnce.end());
            sort(notLost.begin(),notLost.end());
            return {notLost,lostOnce};
    }
};