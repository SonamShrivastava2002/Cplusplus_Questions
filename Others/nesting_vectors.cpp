#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v1 = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    /*for (int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for (int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    //array of vectors
    vector<int> v2[n];
    /*for (int i=0;i<n;i++){
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            v2[i].push_back(x);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<v2[i].size();j++){
            cout<<v[j].first<<" "<<v[j].second<<endl;
        }
    }
    cout<<v2[0][2]<<endl;*/
    vector<vector<int>> v3;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int> temp;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v3.push_back(temp);
    }
    for (int i=0;i<v3.size();i++){
        for (int j=0;j<v3[i].size();j++){
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}