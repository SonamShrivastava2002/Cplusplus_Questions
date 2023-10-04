#include <iostream>
using namespace std;
int main(){
    int arr[9]={10,4,5,2,3,6,1,3,6};
    //int m=3;
    int n=9;
    //int s=m+1;
    int s=0;
    int e=n-1;
    for (;s<=e;s++){
        swap(arr[s],arr[e]);
        e--;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}