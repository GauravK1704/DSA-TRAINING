class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        // for(int i=0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum=sum+nums[j];
        //         if(j-i+1>=2 && sum%k==0){
        //             return true;
        //         }

        //     }
        // }
        // return false;


        /// using prefix sum 
        unordered_map<int,int>mp;
        mp[0]=-1;

      int PS=0;

        for(int i=0; i<n; i++){
            PS=PS+nums[i];
            int rem=PS%k;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2){
                    return true;
                }
            }
                else{
                    mp[rem]=i;
                }
            
        }
        return false;
    }

};