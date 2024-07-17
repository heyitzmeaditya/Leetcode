class Solution {
public:
    vector<string>answer;
    vector<string> fizzBuzz(int n) {\
        int i=1;
        int fizz=0;int buzz=0;
    
        while(i<=n){
            fizz++;buzz++;
            if(fizz==3&&buzz==5){
                 answer.push_back("FizzBuzz");
                 fizz=0;buzz=0;

            }
            else if(fizz==3){
               answer.push_back("Fizz");
               fizz=0;
            }
            else if(buzz==5){
               answer.push_back("Buzz");
               buzz=0;


            }
            else{
            answer.push_back(to_string(i));
            }
            i++;
           

        }
        return answer;
        
    }
};