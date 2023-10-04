#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_L = 0,cnt_R = 0;
    for (int i=0;i<n;i++){
        if(s[i] == 'L'){
            cnt_L--;
        }
        else{
            cnt_R++;
        }
    }
    //cout<<cnt_L<<" "<<cnt_R<<endl;
    int sum = cnt_R - cnt_L + 1;
    cout<<sum<<endl;
    return 0;
}