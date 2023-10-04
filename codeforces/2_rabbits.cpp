#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        //x,a - tall // y,b - short
        cin>>x>>y>>a>>b;
        int time = -1;
        if(((y-x)%(a+b))==0){
            time = ((y-x)/(a+b));
        }
        cout<<time<<endl;
    }
    return 0;
}