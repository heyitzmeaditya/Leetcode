class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int>s;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="+"){
                //Toadd 
                int top=s.top();
                s.pop();
                int Ntop=top+s.top();
                s.push(top);
                s.push(Ntop);
                
            }
            else if(arr[i]=="D"){
                s.push(2*s.top());

            }
            else if(arr[i]=="C"){
                s.pop();
            }
            else{
                s.push(stoi(arr[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum=sum+s.top();
            s.pop();
        }
        return sum;
        
    }
};