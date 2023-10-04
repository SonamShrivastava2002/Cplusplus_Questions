#include <iostream>
using namespace std;
int counting_back(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<" ";
    return counting_back(n-1);
}
int counting(int n){
    if(n==1){
        return 1;
    }
    cout<<counting(n-1)<<" ";
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<counting(n)<<endl;
    cout<<counting_back(n)<<endl;
    return 0;
}