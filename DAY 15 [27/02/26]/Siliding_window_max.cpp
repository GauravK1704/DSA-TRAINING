class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         int n=arr.size();
//        vector<int>ans;
//        multiset<int>ms;
//        int i=0; 
//        int j=0;
//      int count=0;
//        int max1=INT_MIN;
//        if(n==1 || k==1) return arr;
//        for(int a=0; a<=n-k; a++){
//         if(arr[a]>max1){
//             max1=arr[a];
//         }
//        }
//        while(j<n){
//         if(j-i+1>k){
//             i++;
//         }
//        if(j-i+1==k){
//             ans.push_back(max1);
//             count++;
//         }
//         j++;
//        }

//    return ans;

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int i = 0, j = 0, count = 0;
        int n = nums.size();
        if (n == 1 || k == 1) 
            return nums;
        vector<int> ans(n - k + 1);
        map<int, int> mp;   
        while (j < n) {
            mp[nums[j]]++;
            if (j - i + 1 > k) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
            if (j - i + 1 == k) {
                ans[count] = mp.rbegin()->first;
                count++;
            }
            
            j++;
        }
        
        return ans;
    }
};
        
    
