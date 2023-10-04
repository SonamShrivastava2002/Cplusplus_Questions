#include <iostream>
using namespace std;
int main(){
    int arr[5]={0,3,0,2,0};
    int n=5;
    int j=0;
    for (int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}