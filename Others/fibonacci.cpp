#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    int b =1;
    if(n==1){
        cout<<a<<endl;
    }
    else{
        for(int i=2;i<n;i++){
            int temp = b;
            b = a+temp;
            a = temp;
        }
        cout<<b<<endl;
    }
    return 0;
}