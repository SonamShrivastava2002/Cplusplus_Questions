#include <bits/stdc++.h>
using namespace std;
int findX(vector<int> &arr) {
	map<int,int> m;
    //int cnt = 0;
    int a = 0;
	int n = arr.size();
	for(int i=0;i<n;i++){
        if(m.find(-1*arr[i]) == m.end()){
            m.insert(make_pair(-1*arr[i],1));
        } 
        else{
            m[-1*arr[i]]++;
        }
    }
    for(auto it:m){
        if(-1*(it.first) == it.second){
            a = it.second;
            break;
        }
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int ans = findX(arr);
    cout<<ans<<endl;
}