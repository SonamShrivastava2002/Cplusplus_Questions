#include <iostream>
/*stl library*/#include <deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(3);
    d.push_front(5);
    d.push_back(8);
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    /*d.pop_back();
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for (int i:d){
        cout<<i<<" ";
    }*/
    cout<<"First index element:"<<d.at(1)<<endl;
    //first element
    cout<<"first element:"<<d.front()<<endl;
    //last element
    cout<<"last element:"<<d.back()<<endl;
    cout<<"Empty or not:"<<d.empty()<<endl;
    //Erase element
    cout<<"before erase:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase:"<<d.size()<<endl;
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}