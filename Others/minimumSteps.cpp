#include <bits/stdc++.h>
using namespace std;
int minimumSteps(int n, vector<int> &arr){
    map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(arr[i]) == m.end()){
            m.insert(make_pair(arr[i],1));
        }
        else{
            m[arr[i]]++;
        }
    }
    auto it = m.begin();
    int sum = 0;
    int size = m.size();
    for(int i=0;i<size;i++){
        sum += ((*it).second)*i;
        it++;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int final = minimumSteps(n,arr);
        cout<<final<<endl;
    }
    return 0;
}
    