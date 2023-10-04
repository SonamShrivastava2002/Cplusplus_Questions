#include <iostream>
using namespace std;
int find_length(char arr[]){
    int count=0;
    for (int i=0;arr[i]!=0;i++){
        count++;
    }
    return count;          
}
void reverse(char arr[],int n){
    for (int i=0;i<n-i-1;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main(){
    //cout<<"Character array:"<<endl;
    char ch[5]={'a','b','c','d','e'};
    /*for (int i:ch){
        cout<<i<<" ";
    }*/
    //cout<<endl;
    char input_ch[20];
    cin>>input_ch;
    //input_ch[3]='\0';
    //cout<<input_ch<<endl;
    int len=find_length(input_ch);
    cout<<len<<endl;
    cout<<"Reversed char:";
    reverse(input_ch,len);
    cout<<input_ch<<endl;
    return 0;
}