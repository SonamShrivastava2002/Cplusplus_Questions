#include <iostream>
using namespace std;
int maxi(int a,int b,int c){
    int ans1;
    int ans2;
    if(a>=b && a>=c){
        ans1 = a;
        if(b>=c){
            ans2 = b;
        }
        else{
            ans2 = c;
        }
    }
    if(b>=a && b>=c){
        ans1 = b;
        if(a>=c){
            ans2 = a;
        }
        else{
            ans2 = c;
        }
    }
    if(c>=a && c>=b){
        ans1 = c;
        if(a>b){
            ans2 = a;
        }
        else{
            ans2 = b;
        }
    }
    int sum = ans1+ans2;
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int alice = maxi(a1,a2,a3);
        int bob = maxi(b1,b2,b3);
        if(alice>bob){
            cout<<"Alice"<<endl;
        }
        else if(bob>alice){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }
    return 0;
}