class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // brute force approch
        int n=matrix.size();
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<matrix[i].size(); j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;


// Optimal Approch
int m=matrix[0].size();
int start=0;
int end=n*m-1;
while(start<=end){
    
    int mid=start+(end-start)/2;
    int row=mid/m;
    int col=mid%m;
    if(matrix[row][col]==target){
        return true;
    }
    if(matrix[row][col]<target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
    return false;    
    }
};