#include <iostream>
using namespace std;
int summ(int *arr,int n){
    //base query
    if(n==1){
        int temp = arr[n-1];
        return temp;
    }
    int sum = arr[n-1] + summ(arr--,n-1);
    return sum;   
}
int main(){
    int arr[5] = {2,4,9,9,9};
    int n = 5;
    int ans = summ(arr,n);
    cout<<ans<<endl;
    return 0;
}