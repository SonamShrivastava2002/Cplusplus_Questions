#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool remove_extra(char ch){
    //cout<<ch<<endl;
    if ((ch>='A' && ch<='Z') || (ch>='0' && ch<='9') || (ch>='a' && ch<='z')){
        //cout<<ch<<endl;
        return 1;
    }
    return 0;
}
char tolowercase(char ch){
    if ((ch>='a' && ch<='z')||(ch>=0 && ch<=9)){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(string ch){
    int n=ch.length();
    int e=n-1;
    int i=0;
    while(i<=e){
        if(ch[i]!=ch[e]){
            return 0;
        }
        e--;
        i++;
    }
    return 1;
}
bool isPalindrome(string s) {
        int n=s.length();
        //cout<<n<<endl;
        string per="";
        for (int i=0;i<n;i++){
            //cout<<s[i]<<endl;
            if (remove_extra(s[i])){
                //cout<<i<<":"<<s[i]<<endl;
                per.push_back(s[i]);
                //cout<<per<<endl;
            }
        }
        for (int i=0;i<n;i++){
            per[i] = tolowercase(per[i]);
            //cout<<per<<endl;
        } 
        return palindrome(per); 
}
int main(){
    string s="A man, a plan, a canal -- Panama";
    //cin>>s;
    bool t = isPalindrome(s);
    cout<<t;
    //return 0;
}
/*bool remove_extra(char ch){
    if ((ch>='A' && ch<='Z') || (ch>=0 && ch<=9) || (ch>='a' && ch<='z')){
        return 1;
    }
    return 0;
}
char tolowercase(char ch){
    if (ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char ch[],int n){
    for (int i=0;i<n-i-1;i++){
        if(tolowercase(ch[i])!=tolowercase(ch[n-i-1])){
            return 0;
        }
    }
    return 1;
}
int find_length(char arr[]){
    int count=0;
    for (int i=0;arr[i]!=0;i++){
        count++;
    }
    return count;          
}
int main(){
    char unknown[13];
    cin>>unknown;
    int n = find_length(unknown);
    cout<<"Palindrome:"<<palindrome(unknown,n)<<endl;
    return 0;
}*/