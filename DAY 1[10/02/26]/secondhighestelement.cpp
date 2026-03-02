# include<iostream>
using namespace std;
int main(){
    int arr[]={-1,2,6,8,9,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int First=-999;
    int Second=999;
    for(int i=0; i<n; i++){
        if(arr[i] > First){
            Second = First;
            First = arr[i];
        }
        else if(arr[i] >Second && arr[i]<First){
            Second = arr[i];
        }
    }
    cout<<Second;
    return 0;
}