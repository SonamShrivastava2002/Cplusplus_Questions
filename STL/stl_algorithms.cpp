#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(14);
    v.push_back(17);
    v.push_back(29);
    v.push_back(37);
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Finding an element using binary search: "<<binary_search(v.begin(),v.end(),13767);
    cout<<endl;
    cout<<"Lowerbound:"<<lower_bound(v.begin(),v.end(),37)-v.begin()<<endl;
    cout<<"Upperbound:"<<upper_bound(v.begin(),v.end(),37)-v.begin()<<endl;
    /*int a=5;
    int b=29;
    cout<<"MAX:"<<max(a,b);
    cout<<endl;
    cout<<"MIN:"<<min(a,b)<<endl;;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    string rev="abcde";
    reverse(rev.begin(),rev.end());
    cout<<rev<<endl;*/
    rotate(v.begin(),v.begin()+3,v.end());
    cout<<"Afetr rotate:"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i:v){
        cout<<i<<" ";
    }
    return 0;
}