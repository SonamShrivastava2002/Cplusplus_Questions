#include <iostream>
#include <vector>
using namespace std;
vector<int> merge_function(vector<int> arr1,vector<int> arr2,int n,int m){
    vector<int> arr3(m+n);
    int j=0,i=0,k=0;
    while(i<n && j<m){
        if (arr2[j]<arr1[i]){
            arr3[k++]=arr2[j++];
        }
        else{
            arr3[k++]=arr1[i++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }      
    arr1 = arr3;
    for(int i=0;i<n+m;i++){
        cout<<arr1[i]<<" ";
    }
}
int main(){
    vector<int> arr1={2,3,4,5,20};
    vector<int> arr2={3,5,10,22};
    int m=4;
    int n=5;
    arr1 = merge_function(arr1,arr2,5,4);
    for(int i=0;i<n+m;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}