#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ta = a-1;
        int tbc = b-c;
        int tca = c-1;
        if (tbc<0)
            tbc = -1*tbc;
        if (tca<0)
            tca = -1*tca;
        int tb = tbc + tca;
        if (ta < tb){
            cout<<"1"<<endl;
        }
        else if(tb<ta){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
    return 0;
}