#include <iostream>
using namespace std;
void rotated(int arr[][4],int n){
    int s = 0;
    for (int i=0;i<n;i++){
        int e=n-1;
        for (int j=0;j<n;j++){
            cout<<arr[e][s]<<" ";
            e--;
        }
        cout<<endl;
        s++;
    }
}
int main(){
    int arr[4][4] = {{5,1,9,11}
                    ,{2,4,8,10}
                    ,{13,3,6,7}
                    ,{15,14,12,16}};
    rotated(arr,4);
    return 0;
}