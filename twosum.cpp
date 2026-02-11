//Bruteforce approch

#include <iostream>
using namespace std;
int main(){
    int arr[]={2,7,4,6,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target=8;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout << i << " " << j << endl;
                return 0;
            }
        }

    }
    return{};
    
}