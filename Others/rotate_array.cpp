#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[8]={7,5,2,11,2,43,1,1};
    int n=8;
    int k=2;
    vector<int> arr_vew(n);
    for (int i=0;i<n;i++){
        arr_vew[(i+k)%n]=arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr_vew[i]<<" ";
    }
    return 0;
}