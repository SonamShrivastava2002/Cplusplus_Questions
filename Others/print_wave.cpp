#include <iostream>
#include <vector>
using namespace std;
void wave_printing(int arr[][4],int n,int m){
    vector<int> ans;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (i%2==0){
                cout<<arr[j][i]<<" ";
            }
            else{
                cout<<arr[n-j-1][i]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
    wave_printing(arr,3,4);                    
    return 0;
}