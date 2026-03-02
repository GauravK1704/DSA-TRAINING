class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
     
        while(start<=end){
               int mid = (start+end)/2; /// another formula start+(end-start)/2
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[mid]<target){
                start++; 
                // start=mid+1;
            }
            else if(nums[mid]>target){
                end--; 
                // end=mid-1;
            
            }
        }
        return -1;
        
    }
};