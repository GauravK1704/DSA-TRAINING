class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int i;
            int n=nums.size();
           int N_sum=n*(n+1)/2;
           int N_nums=0;
           for(i=0; i<n; i++){
            N_nums=N_nums+nums[i];
           }
          int ans=N_sum-N_nums;
          return ans;
            
        }
        
    };