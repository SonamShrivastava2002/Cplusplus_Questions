#include <iostream>
using namespace std;
char check(char a[][3]){
    char c = 'a';
    if(a[0][0] == a[1][1] && a[2][2] == a[1][1]){
        c = a[0][0];
    }
    else if(a[0][2] == a[1][1] && a[2][0] == a[1][1]){
        c = a[0][2];
    }
    else{
        for (int i=0;i<3;i++){
        if(a[i][1] == a[i][0] && a[i][1] == a[i][2] && a[i][2] == a[i][0]){
            c = a[i][1];
            break;
        }
        else if(a[1][i] == a[0][i] && a[2][i] == a[1][i]){
            c = a[1][i];
            break;
            }
        }
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        char a[3][3];
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
        char s = check(a);
        if(s == 'a' || s == '.'){
            cout<<"DRAW"<<endl;
        }    
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}