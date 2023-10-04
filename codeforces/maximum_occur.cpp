#include <iostream>
#include <vector>
using namespace std;
char max_occur(string s){
    int arr[26]={0};
    int n=s.length();
    for (int i=0;i<n;i++){
        char ch=s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int max_count = -1;
    int ans = 0;
    for (int i=0;i<26;i++){
        if (max_count<arr[i]){
            ans = i;
            max_count = arr[i];
        }   
    }
    char final = 'a' + ans;
    return final;
}
int main(){
    string r = "revolve";
    cout<<max_occur(r);
    return 0;
}