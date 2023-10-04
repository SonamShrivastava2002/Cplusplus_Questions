#include <iostream>
using namespace std;
void rotate(int arr[],int n){
    int s = 0;
    int e = n-1;
    if(s>=e){
        return;
    }
    swap(arr[s],arr[e]);
    rotate(arr+1,n-1);
}
int main(){
    int n = 8;
    int arr[8] = {9,8,7,6,4,2,1,3};
    rotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}