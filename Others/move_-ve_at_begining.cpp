#include <iostream>
using namespace std;
int main(){
    int arr[14] = {1,2,-4,-5,2,-7,3,2,-6,-8,-9,3,2,1};
    int n=14;
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s]<0 && arr[e]<0){
            s++;
        }
        else if(arr[s]>0 && arr[e]<0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]<0 && arr[e]>0){
            s++;
            e--;
        }
        else{
            e--;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}