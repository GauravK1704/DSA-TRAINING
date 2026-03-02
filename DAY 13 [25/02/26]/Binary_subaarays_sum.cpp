class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int k) {



         int n=arr.size();

         //Bruteforce approch will give TLE;
        //      int count=0;
        
        // for(int start=0; start<n; start++){
        //     int sum=0;
        //     for(int end=start; end<n; end++){
        //         sum=sum+arr[end];
        //         if(sum==k){
        //             count++;
        //         }

        //     }

        // }
        // return count;
     
     unordered_map<int,int>mp;
     for(int i=1; i<n; i++){
         arr[i]=arr[i-1]+arr[i];
     }
     int count=0;
     for(int j=0; j<n; j++){
         if(arr[j]==k){
             count++;
             
         }
         int val=arr[j]-k;
         if(mp.find(val)!=mp.end()){
             count=count+mp[val];
         }
         if(mp.find(arr[j])==mp.end()){
             mp[arr[j]]=0;
         }
         mp[arr[j]]++;
     }
        return count;
        
    }
};