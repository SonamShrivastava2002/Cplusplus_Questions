#include <bits/stdc++.h>
using namespace std;
bool isPresent(int arr[],int n,int &sum){
    bool t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i == 0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1] > j){
                t[i][j] = t[i-1][j];
            }
            else if(arr[i-1] <= j){
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
            }
        }
    }
    return t[n][sum];
}
int main(){
    int arr[6] = {3,34,4,12,5,2};
    int n = 6;
    int sum = 9;
    /*for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }*/
    if(isPresent(arr,n,sum)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}