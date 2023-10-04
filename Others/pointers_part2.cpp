#include <iostream>
using namespace std;
int main(){
    int arr[3]={2,6,4};
    /*cout<<"Address of first memory block is:"<<arr<<endl;
    cout<<"Address of first memory block is:"<<&arr[0]<<endl;
    cout<<"Value is:"<<*arr<<endl;
    cout<<"Value is:"<<(*arr+1)<<endl;
    cout<<"Value is:"<<*(arr+1)<<endl;*/
    //arr[i] = *(arr+i);
    int i=2;
    //cout<<i[arr]<<endl;   //-----a/c to the formula
    /*int temp[10];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;*/
    int a[10] = {1,2,3,4,5,67};
    /*cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;*/
    
    // character pointers

    char ch[6] = "abcde";
    //cout<<ch<<endl;
    char *c = &ch[0];
    //cout<<c<<endl;
    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;
    return 0;
}