#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertSort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }
    int index;
    for (int i=0;i<n;i++){
        index = i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }   
        if(index!=i){
            swap(arr[index],arr[i]);
        }
    }
    insertSort(arr + 1,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}