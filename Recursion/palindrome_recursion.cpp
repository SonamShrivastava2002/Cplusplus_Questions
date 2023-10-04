#include <iostream>
using namespace std;
bool palindrome(string s,int st,int e){
    if(st>e){
        return true;
    }
    if(s[st]!=s[e]){
        return false;
    }
    else{
        st++;
        e--;
        palindrome(s,st,e);
    }
}
int main(){
    string s;
    cin>>s;
    int st = 0;
    int e = s.length() - 1;
    if(palindrome(s,st,e)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}