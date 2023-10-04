#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool matches(char ch,char t){
    if(ch == '}' && t == '{'){
        return true;
    }
    else if(ch == ')' && t == '('){
        return true;
    }
    else if(ch == ']' && t == '['){
        return true;
    }
    else{
        return false;
    }
}
bool isValid(string ex){
    stack<char> s;
    for(int i=0;i<ex.length();i++){
        char ch = ex[i];
        //if opening bracket,stack push
        //if close bracket,stack top check and pop
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char t = s.top();
                if(matches(ch,t)){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }   
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "({{[}]}})";
    if(isValid(s)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
} 
