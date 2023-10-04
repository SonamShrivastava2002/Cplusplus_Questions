#include <iostream>
#include <string>
using  namespace std;
int length_compressed(char chars[],int n){
    string s="";
    int arr[26]={0};
    for (int i=0;i<n;i++){
        int index = chars[i]-'a';
        arr[index]++;
    }
    for (int i=0;i<26 && arr[i]!=0;i++){
        if (arr[i]==1){
            char ch=i+'a';
            s.push_back(ch);
        }
        else{
            if(arr[i]<10){
                char ch=i+'a';
                s.push_back(ch);
                string sh = to_string(arr[i]);
                s.append(sh);
            }
            else{
                char ch=i+'a';
                s.push_back(ch);
                string sh = to_string(arr[i]);
                for (int j:sh){
                    s.push_back(j);
                }
            }
        }
    }
    cout<<s<<endl;
    return s.length();
}
int main(){
    char chars[13] = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    int n=sizeof(chars);
    cout<<length_compressed(chars,n);
    return 0;
}