#include <iostream>
using namespace std;
int main(){
    // input
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        /*output:
        + = (a+b=c)
        - = (a-b=c)*/
        if ((a+b)==c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
    
    return 0;
}