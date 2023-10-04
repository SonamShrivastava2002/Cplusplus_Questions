#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //tsondu
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<int> arr1(n);
        for (int i=0;i<n;i++){
            cin>>arr1[i];
            arr1.push_back(arr1[i]);
        }
        //tenzing       
        vector<int> arr2(m);
        for (int i=0;i<m;i++){
            cin>>arr2[i];
            arr2.push_back(arr2[i]);
        }
        //tsondu choosing players
        int player1;
        int player2;
        cin>>player1;
        cin>>player2;
        //player1 = arr1[0];
        //player2 = arr2[0];
        int index1;
        int index2;
        //storing index
        for (int i=0;i<n;i++){
            if (player1 == arr1[i]){
                index1 = i;
            }
        }
        for (int j=0;j<m;j++){
            if (player2 == arr2[j]){
                index2 = j;
            }
        }
        while(arr1.empty() == false && arr2.empty() == false){
            //abities
            int x = player1 - player2;
            int y = player2 - player1;
            //cout<<x<<" ";
            //cout<<y<<" ";
            if (x == y){
                cout<<"Draw";
                break;
            }
            if (x<=0){
                vector<int>::iterator it;
                it = arr1.begin() + index1;
                arr1.erase(it);
                player2 = arr2[0];
            }
            if (y<=0){
                vector<int>::iterator it;
                it = arr2.begin() + index2;
                arr2.erase(it);
                player1 = arr1[0];
            }
        }
        if (arr1.empty()){
            cout<<"Tenzing"<<endl;
        }
        if(arr2.empty()){
            cout<<"Tsondu"<<endl;
        }
    }
    return 0;
}