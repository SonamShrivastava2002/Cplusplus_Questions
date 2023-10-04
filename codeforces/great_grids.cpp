#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[k][4];
        for (int i=0;i<k;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }
        vector<vector<int>> v(n);
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j] = 0;
            }
        }
        for (int i=0;i<k;i++){
            for(int j=0;j<4;j+=2){
                int index1 = arr[i][j];
                int index2 = arr[i][j+1];
                v[index1][index2] = 1;
            }
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(v[i][j] == 0 || v[i][j+1] == 0 || v[i+1][j] == 0 || v[i+1][j+1] == 0){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        if(cnt == ((n-1)*(m-1))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}