#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<'a'<<endl;
        }
        else{
            int cnt = 2;
            for (int i=2;i<n;i++){
                if(n%i == 0){
                    cnt++;
                }
            }
            string s="";
            for(int i=0;i<n;i++){
                if(i<cnt){
                    s.append(1,('a' + i));
                }
                else{
                    s.append(1,('a' + (i-cnt)));
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}