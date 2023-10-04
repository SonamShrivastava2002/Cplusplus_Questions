#include <iostream>
using namespace std;
string reversed(string s){
    int n=s.length();
    string ans="";
    for (int i=0;i<n;i++){
        int j=0;
        if (s[i]==' '){
            while(j<i && s[i-j-1]!=' '){  
                ans.push_back(s[i-j-1]);
                j++;  
            }
            ans.push_back(' ');
        }
        if(i==n-1){
            while(j<=i && s[i-j]!=' '){
                ans.push_back(s[i-j]);
                j++;
            }              
        }
    }
    return ans;
}
int main(){
    string s = "hehhhhhhe";
    cout<<reversed(s);
    return 0;
}