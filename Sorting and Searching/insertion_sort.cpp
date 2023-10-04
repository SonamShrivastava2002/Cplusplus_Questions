#include <iostream>
using namespace std;
int main(){
    int arr[6]={6,5,4,3,2,1};
    int n=6;
    int ans;
    int j;
    for (int i=0;i<n;i++){
        ans = arr[i];
        for (j=i-1;j>=0;j--){
            if (ans<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=ans;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}