class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int zeros=0;
        // int max_len=0;
        // int len=0;
    //     while(j<n){
    //         if(nums[j]==0){
    //             zeros++;
    //         }
    //         if(zeros>k){
    //             if(nums[i]==0){
    //                 zeros--;
    //             }
    //                 i++;
    //         }
    //             if(zeros<=k){
    //                 len=j-i+1;
    //                 max_len=max(len,max_len);
                    
    //             }
    //             j++;
            
    //     }
    //    return max_len; 
    int curr_sum=0; int ans=0;
    for(int a=0; a<n; a++){
        if(nums[a]==0){
            zeros++;
        }
    }
    if(zeros<k) return n;
  while(j<n){
    curr_sum+=nums[j];
    if(j-i+1-curr_sum>k){
        curr_sum-=nums[i];
        i++;

    }
    else if(j-i+1-curr_sum==k){
        ans=max(ans,j-i+1);
      

    }

  j++;
  }
  return ans;

    }
};