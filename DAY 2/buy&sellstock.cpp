class Solution {
    public:
      int stockBuySell(vector<int> &arr) {
         int i, n=arr.size();
         int profit=0;
         int min_price=0;
         if(n<=1){
             return 0;
         }
             for(i=0; i<n; i++){
                 
         if(arr[i]<min_price){
             min_price=arr[i];
         }
         else if(arr[i]-min_price>profit){
             profit=arr[i]-min_price;
           }
         }
      
       return profit;
          
      }
      
  };