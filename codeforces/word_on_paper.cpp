#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[8][8];
        for (int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>s[i][j];
            }
        }
        string ans;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(s[i][j] != '.'){
                    ans.append(1,s[i][j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}