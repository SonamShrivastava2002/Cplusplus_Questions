#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="Sonam";
    m[2]="Simmi";
    m[3]="Shrivastava";
    m.insert({5,"ME"});
    cout<<"Before erase:"<<endl;
    for (auto i:m){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    cout<<"finding-5:"<<m.count(5)<<endl;
    m.erase(5);
    cout<<"After erase:"<<endl;
    for (auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it = m.find(2);        //2 ke baad ke elements
    for (auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}