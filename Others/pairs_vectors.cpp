#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;    //-----pair stores a pair of same/different type
    //p = make_pair(16,"sonam");
    /*p = {16,"sonam"};
    pair<int,string> pc = p;
    pc.first = 29;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1 = p;
    p1.first = 1;
    cout<<p.first<<" "<<p.second<<endl;*/
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    pair<int,int> p_array[3];
    p_array[0] = {1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    cout<<'\n';
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}