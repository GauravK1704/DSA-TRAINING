class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0;
        int j=0;
        int sum=0;
        int max_sum=INT_MIN;
        while(j<n){
        if(j-i+1<k){
            sum=sum+arr[j];
           
            j++;
        }
        else{
             sum=sum+arr[j];
            max_sum=max(sum,max_sum);
            sum=sum-arr[i];
            i++;
            j++;
        }

        }
        return max_sum;
        
    }
};