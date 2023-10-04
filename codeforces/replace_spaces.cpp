#include <iostream>
using namespace std;
bool replace(char ch){
    if (ch==' '){
        return 1;
    }  
    return 0;
}
string final_replace(string str){
    int n=str.length();
    string temp="";
    for (int i=0;i<n;i++){
        if (replace(str[i])){
            str[i] = '@' + '4' + '0';
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    str = temp;
    return str;
}
int main(){
    //replace with = "@40"
    string s = "Coding Ninjas Is A Coding Platform";
    final_replace(s);
    cout<<final_replace(s);
    return 0;
}