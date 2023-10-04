#include <iostream>
using namespace std;
void spiral_wave(int arr[][4],int n,int m){
    int count = 0;
    int total = m*n;
    int sc=0;
    int sr=0;
    int er=n-1;
    int ec=m-1;
    while(count<total){
        for (int i=sc;i<=ec && count<total;i++){
            cout<<arr[sr][i]<<" ";
            count++;
        }
        sr++;
        for (int i=sr;i<=er && count<total;i++){
            cout<<arr[i][ec]<<" ";
            count++;
        }
        ec--;
        for (int i=ec;i>=sc && count<total;i--){
            cout<<arr[er][i]<<" ";
            count++;
        }
        er--;
        for (int i=er;i>=sr && count<total;i--){
            cout<<arr[i][sc]<<" ";
            count++;
        }
        sc++;
    }
}
int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    spiral_wave(arr,4,4);
    return 0;
}