class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>arr;
        for(int i=0;i<nums1.size();i++){
                    arr.push_back(nums1[i]);


        }
        for(int i=0;i<nums2.size();i++){
                    arr.push_back(nums2[i]);


        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        float median=0;
        if(n%2==0){
            median=arr[n/2]+arr[(n-2)/2];
            median =median/2;
            

        }
        else{
            median=arr[n/2];

        }
        return median;


    }
};