
/// Bruteforce approch
class Solution {
    public:
        int maxArea(vector<int>& arr) {
            int n=arr.size();
            int Max_Water=0;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    int wt=(j-i);
                    int ht=min(arr[i],arr[j]);
                    int area=wt*ht;
                    Max_Water=max(Max_Water,area);
                }
            }
            return Max_Water;
        }
    };

    // Optimal approch
    
class Solution {
    public:
        int maxArea(vector<int>& arr) {
            int n=arr.size();
            int Max_Water=0;
           int i=0;
           int j=n-1;
           while(i<j){
            int wt=j-i;
            int ht=min(arr[i],arr[j]);
            int area=wt*ht;
        Max_Water=max(Max_Water,area);
        if(arr[i]<arr[j]){
            i++;
            
        }
        else{
            j--;
        }
    
           }
           return Max_Water;
        }
    };