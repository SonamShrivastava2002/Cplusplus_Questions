#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[],int n){
    int cnt0 = count(arr,arr+n,0);
    int cnt1 = count(arr,arr+n,1);
    int cnt2 = count(arr,arr+n,2);
    for(int i=0;i<cnt0;i++){
        arr[i] = 0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        arr[i] = 1;
    }
    for(int i=cnt0 + cnt1;i<n;i++){
        arr[i] = 2;
    }
}
int main(){
    int n=3;
    int arr[3] = {0,1,0};
    sort012(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}