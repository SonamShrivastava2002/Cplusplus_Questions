#include <iostream>
using namespace std;
int main(){
    int arr[7]={8, 22, 7, 9, 31, 5, 13};
    int n=7;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1] && (j+1)<n){
                swap(arr[j],arr[j+1]);
                for (int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            
        }
        
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}