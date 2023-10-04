#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<'\n';
        char arr[8][8];
        for (int i=0;i<8;i++){
            for (int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }
        int r,c;
        for (r=1;r<7;r++){
            for (c=1;c<7;c++){
                char s1 = arr[r-1][c-1];
                char s2 = arr[r-1][c+1];
                char s3 = arr[r+1][c-1];
                char s4 = arr[r+1][c+1];
                if (s1=='#' && s2=='#' && s3=='#' && s4=='#'){
                    cout<<(r+1)<<" "<<(c+1)<<endl;
                }
            }
        }
    }
    return 0;
}