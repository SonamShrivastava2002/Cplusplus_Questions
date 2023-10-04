#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch[n][n];
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }
        int index_i1;
        int index_j1;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ch[i][j] == '*'){
                    index_i1 = i;
                    index_j1 = j;
                }
                ch[index_i1][index_i1]='*';
                ch[index_j1][index_j1]='*';
                break;
            }
        }
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ch[i][j];
            }
        }
    }
    return 0;
}