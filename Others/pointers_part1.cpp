#include <iostream>
using namespace std;
int main(){
    int num=5;
    //cout<<num<<endl;
    //address of Operator-&
    //cout<<"Address of num is:"<<&num<<endl; //-------hexadecimal form
    int *ptr = &num;
    //cout<<"value is:"<<*ptr<<endl;
    //cout<<"value of p is:"<<ptr<<endl; 
    double d=4.3;
    double *pd = &d;
    /*cout<<"Address is:"<<p<<endl;
    cout<<"value is:"<<*p<<endl;
    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
    cout<<"size of double is:"<<sizeof(d)<<endl;
    cout<<"size of pointer is:"<<sizeof(pd)<<endl;
    */
    /*
    int i=9;
    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;
    //OR
    int *p = 0;
    p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    */
    /*int *p = &num;
    cout<<"before:"<<num<<endl;
    (*p)++;
    cout<<"After:"<<num<<endl;
    //copying a pointer
    int *q = p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl; */
    //imp concept-pointer arithmetic
    int i=3;
    int *t = &i;
    cout<<(*t)++<<endl;
    cout<<(*t)<<endl;
    cout<<t<<endl;
    t = t+1;
    cout<<t<<endl;
    return 0;
}