#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[2][2];
        for (int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
        int count=0;
        for (int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(arr[i][j]==0){
                    count++;
                }
            }
        }
        if(count==4){
            cout<<"0"<<endl;
        }
        else if(count==0){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}