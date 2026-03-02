class Solution {
    bool KyaBanana(int mid , vector<int>& piles ,int h){
         long totalTime=0;
        for(int i=0; i<piles.size(); i++){
            totalTime=totalTime+piles[i]/mid;
            if(piles[i]%mid!=0){
                totalTime++;
            }
        }
        if(totalTime<=h){
            return true;
        }
        return false;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=0;
        for(int num:piles){
            high=max(high,num);
        }
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(KyaBanana(mid,piles,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;

            }
        }
        return ans;
    }
};