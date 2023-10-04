#include <iostream>
/*stl vector library*/#include <vector>
using namespace std;
int main(){
    /*empty vector*/ vector<int> v;
    cout<<"Capacity:"<<v.capacity()<<endl;
    vector<int> vec;
    vec.push_back(18);
    cout<<"Capacity:"<<vec.capacity()<<endl;
    vec.push_back(38);
    cout<<"Capacity:"<<vec.capacity()<<endl;
    vec.push_back(30);
    cout<<"Capacity:"<<vec.capacity()<<endl;
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Element at 2nd Index:"<<vec.at(2)<<endl;
    //first element
    cout<<"first element:"<<vec.front()<<endl;
    //last element
    cout<<"last element:"<<vec.back()<<endl;
    cout<<"Before pop:"<<endl;
    for (int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vec.pop_back();
    cout<<"After pop:"<<endl;
    for (int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before clear:"<<vec.size()<<endl;
    vec.clear();
    cout<<"After clear:"<<vec.size()<<endl;
    vector<int> vec_new(5,2);
    for (int i:vec_new){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> copy_vec(vec_new);
    for (int i:copy_vec){
        cout<<i<<" ";
    }
    return 0;
}