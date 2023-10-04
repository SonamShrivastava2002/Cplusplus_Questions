#include <iostream>
using namespace std;
bool binary(int *arr,int s,int e,int k){
    int mid = s + (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid]<k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5] = {2,4,6,10,14};
    int n = 5;
    int k;
    cin>>k;
    int s = 0,e = n-1;
    if(binary(arr,s,e,k)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}