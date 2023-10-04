#include <iostream>
using namespace std;
void insert_sort(int arr[],int n){
    if(n==0 || n==1){
        return;
    }
    int j;
    for (int i=0;i<n-1;i++){
        int ans = arr[i];
        for (j=i-1;j<n;j++){
            if(ans>arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = ans;
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insert_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}