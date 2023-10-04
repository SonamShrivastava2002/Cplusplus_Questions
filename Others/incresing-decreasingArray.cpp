#include <bits/stdc++.h>
using namespace std;
vector<int> incDecArray(int n, string s) {
    vector<int> ans(n);
    for(int i=1;i<=n;i++){
        ans[i-1] = i;
    }
    int l = n-1;
    int cntP = 0;
    int cntN = 0;
    for(int i=0;i<l;i++){
        if(s[i] == 'P'){
            cntP++;
        }
        else{
            cntN++;
        }
    }
    if(cntP == l){
        return ans;
    }
    if(cntN == l){
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
    int index = 0;
    for(int i=1;i<n && index < l;i++){
        for(int j = i-1;j>=0;j--){
            if(((ans[i] - ans[j]) > 0 && s[index] == 'N') || ((ans[i] - ans[j]) < 0 && s[index] == 'P')){
                swap(ans[i],ans[j]);
            }
        }
        index++;
    }
    if(cntP >= cntN){
        return ans;
    }
    else{
        reverse(ans.begin(),ans.end());
        return ans;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v = incDecArray(n,s);
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}