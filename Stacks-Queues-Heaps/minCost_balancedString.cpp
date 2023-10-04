#include <bits/stdc++.h>
using namespace std;
int findMinCost(string s){
    //odd condition
    if(s.length()%2 != 0){
        return -1;
    }
    stack<char> ch;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if(c == '{'){
            ch.push(c);
        }
        else{
            if(!ch.empty() && ch.top() == '{'){
                ch.pop();
            }
            else{
                ch.push(c);
            }
        }
    }
    int a = 0,b = 0;{
        while(!ch.empty()){
            if(ch.top() == '{'){
                a++;
            }
            else{
                b++;
            }
            ch.pop();
        }
    }
    int ans = ((a+1)/2 + (b+1)/2);
    return ans;
}
int main(){
    string s = "{{{{}}}{{{{}}}";
    int ans = findMinCost(s);
    cout<<ans<<endl;
    return 0;
}