#include <iostream>
using namespace std;
bool sorted(int *arr,int n){
    //base query
    if(n==0 || n==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remain = sorted(arr++ , n-1);
        return remain;
    }
}
int main(){
    int arr[5] = {13,1,5,7,9};
    int n = 5;
    if(sorted(arr,n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}