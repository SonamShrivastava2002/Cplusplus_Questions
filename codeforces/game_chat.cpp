#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for (int i=n-1;i>=0;i--){
            if(s[i]==')'){
                cnt++;
            }
            else{
                break;
            }
        }
        int rest = n - cnt;
        if(cnt>rest){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}