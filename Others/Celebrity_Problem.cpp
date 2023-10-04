#include <bits/stdc++.h>
using namespace std;
bool knows(vector<vector<int>> &M,int a,int b){
    if(M[a][b] == 1){
        return true;
    }
    else{
        return false;
    }
}
int celebrity(vector<vector<int>> &M,int n){
    stack<int> s;
    for (int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size() > 1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if(knows(M,a,b)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int candidate = s.top();
    //single element in stack is potential candidate
    //checking row
    int zerocnt = 0;
    for (int i=0;i<n;i++){
        if(M[candidate][i] == 0){
            zerocnt++;
        }
    }
    if(zerocnt != n){
        return -1; 
    }
    //column check
    int colcnt = 0;
    for(int i=0;i<n;i++){
        if(M[i][candidate] == 1){
            colcnt++;
        }
    }
    if(colcnt != n-1){
        return -1;
    }
    return candidate;
}
int main(){
    int n = 3;
    vector<vector<int>> M{{0,1,0},{0,0,0},{0,1,0}};
    int ans = celebrity(M,n);
    cout<<ans<<endl;
    return 0;
}