#include <iostream>
using namespace std;
string removed(string s){
    for (int i=1;i<s.length();){
        //cout<<i<<endl;
        if(s[i]!=s[i-1]){
            i++;
        }
        else{
            s.erase(i-1,2);
            i=1;
        }
        /*
        switch(s[i]==s[i+1]){
            case (true):
                s.erase(i,2);
                i=0;
                break;
            default:
                i++;
                break;
        }
        */
        
    }
    return s;
}
int main(){
    string s="abbaca";
    cout<<removed(s);
    return 0;
}