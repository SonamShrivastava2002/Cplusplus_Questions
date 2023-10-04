#include <iostream>
using namespace std;
void reversed(string& s,int st){
    if(st>(s.length() - st)){
        return;
    }
    swap(s[st],s[s.length() - 1 - st]);
    st++;
    reversed(s,st);
}
int main(){
    string s;
    cin>>s;
    int st = 0;
    reversed(s,st);
    cout<<s;
    return 0;
}