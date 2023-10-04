#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int xa,ya;
        int xb,yb;
        int xc,yc;
        cin>>xa>>ya;
        cin>>xb>>yb;
        cin>>xc>>yc;
        if(yb == yc){
            if((xb>xa && xc<xa)||(xb<xa && xc>xa)){
                cout<<"1"<<endl;
            }
            else{
                cout<<min(xb,xc)<<endl;
            }
        }
        else if(xb == xc){
            if((yb>ya && yc<ya)||(yb<ya && yc>ya)){
                cout<<"1"<<endl;
            }
            else{
                cout<<min(yb,yc)<<endl;
            }
        }
        else if(xb>xa && xc>xa){
            if((yb>ya && yc<ya)||(yb<ya && yc>ya)){
                cout<<min(xb,xc)<<endl;
            }
            else{
                cout<<(min(xb,xc) + min(yb,yc) - 1)<<endl;
            }
        }
        else{
            if((yb>ya && yc<ya)||(yb<ya && yc>ya)){
                cout<<"1"<<endl;
            }
            else{
                cout<<min(yb,yc)<<endl;
            }
        }
    }
    return 0;
}