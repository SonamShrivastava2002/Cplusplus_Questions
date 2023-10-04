#include <iostream>
/*stl library*/#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(56);
    l.push_front(27);
    l.push_back(59);
    l.push_front(10);
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //before erase
    cout<<"Before erase:"<<endl;
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase:"<<endl;
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size:"<<l.size()<<endl;
    list<int> n(l);
    for (int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> next(5,120);
    for (int i:next){
        cout<<i<<" ";
    }
    return 0;
}