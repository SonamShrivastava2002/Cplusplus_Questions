#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int counting(int arr1[],int arr2[],int n,int m){
    int cnt = n+m;
    if(n>m){
        for (int i=0;i<n;i++){
            if(count(arr1,arr1+n,arr1[i]) + count(arr2,arr2+m,arr1[i]) >= 2){
                cnt--;
            }
        }
    }
    if(m>n){
        for (int i=0;i<m;i++){
            if(count(arr1,arr1+n,arr2[i]) + count(arr2,arr2+m,arr2[i]) >= 2){
                cnt--;
            }
        }
    }
    return cnt;
}
int main(){
    int n=6,m=2;
    int arr1[6] = {85,25,1,32,54,6};
    int arr2[2] = {85,2};
    cout<<counting(arr1,arr2,n,m)<<endl;
    return 0;
}