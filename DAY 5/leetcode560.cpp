class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {


      // Brute force approch  
        int n=nums.size();
        // int count=0;
        
        // for(int start=0; start<n; start++){
        //     int sum=0;
        //     for(int end=start; end<n; end++){
        //         sum=sum+nums[end];
        //         if(sum==k){
        //             count++;
        //         }

        //     }

        // }
        // return count;

/// Optimal Approch using hashmap 

// vector<int>PS(n);
unordered_map<int,int>mp;
int count=0;
// PS[0]=nums[0];
for(int i=1; i<n; i++){
    nums[i]=nums[i-1]+nums[i];
}
for(int j=0; j<n; j++){
    if(nums[j]==k){
        count++;
    }
    int val=nums[j]-k;
    if(mp.find(val)!=mp.end()){
        count=count+mp[val];
    }
    if(mp.find(nums[j])==mp.end()){
        mp[nums[j]]=0;
    }
    mp[nums[j]]++;
 }

return count;
        
    }
};