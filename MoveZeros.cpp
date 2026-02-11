class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          int i=0;
          int n=arr.size();
          for(int j=0; j<n; j++){
              if(arr[j]!=0){
                  swap(arr[j],arr[i]);
                  i++;
              }
          }
          
      }
  };