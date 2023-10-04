#include <iostream>
using namespace std;
void print(int *p){
    //cout<<*p<<endl;
    //cout<<p<<endl;
    //p = p+1;
    //cout<<p<<endl;
    *p = *p + 1;
}
int main(){
    int val = 8;
    int *p = &val;
    /*cout<<p<<endl;
    print(p);
    cout<<p<<endl;*/
    cout<<*p<<endl;
    print(p);
    cout<<*p<<endl;
    return 0;
}