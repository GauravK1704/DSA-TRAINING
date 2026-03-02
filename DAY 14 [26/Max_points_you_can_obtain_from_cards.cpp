class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        int left=0;
        int right=0;
        int max_sum=0;
        for(int i=0; i<k; i++){
            left+=arr[i];
            
        }
        max_sum=left;
        int ridx=n-1;
        for(int i=k-1; i>=0; i--){
            left=left-arr[i];
            right+=arr[ridx];
            ridx--;
            max_sum=max(max_sum,left+right);
        }
        
        return max_sum;
        
    }
};