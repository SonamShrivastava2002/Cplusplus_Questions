#include <iostream>
using namespace std;
string find_substrings(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    string ans=find_substrings(s,part);
    cout<<ans<<endl;
    return 0;
}