#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum1=0;
        int sum2=0;
        for (int i=0;i<6;i++){
            if(i<3){
                sum1+=s[i] - '0';
            }
            if(i>=3){
                sum2+=s[i] - '0';    
            }
        }
        //cout<<sum1<<endl;
        //cout<<sum2<<endl;
        if(sum1 == sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}