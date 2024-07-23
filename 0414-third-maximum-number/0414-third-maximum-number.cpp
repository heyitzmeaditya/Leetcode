class Solution {
public:
    int thirdMax(vector<int>& nums) {

         sort(nums.begin(),nums.end());
        
        int n=nums.size();


       

  int maximum = INT_MIN;
        for(int i=0;i<n;i++){
         maximum=max(maximum,nums[i]);
        }

 if(n<=2){
            return maximum;
        }

int second_maximum= INT_MIN;

 for(int i=0;i<n;i++){
         if(nums[i]>second_maximum && nums[i]!=maximum){
            second_maximum=nums[i];
         
         }


        }

int third_maximum= INT_MIN;
bool thirdMaxFound = false;

for(int i=0;i<n;i++){
    if(nums[i]!=maximum && nums[i]!=second_maximum && nums[i]>=third_maximum){
        third_maximum=nums[i];
        thirdMaxFound=true;
    }

   
}


if(thirdMaxFound){
    return third_maximum;


}


      return maximum;
    }
};