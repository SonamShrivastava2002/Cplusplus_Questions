#include <iostream>
using namespace std;
bool linear(int arr[],int n,int k){
    if(n==0){
        return false;
    }
    if(k == arr[0]){
        return true;
    }
    else{
        bool remain = linear(arr+1,n-1,k);
        return remain;
    }
}
int main(){
    int arr[5] = {3,5,1,2,6};
    int n = 5;
    int k;
    cin>>k;
    bool ans = linear(arr,n,k);
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}