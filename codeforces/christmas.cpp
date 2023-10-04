#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,h;
        cin>>n>>d>>h;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        unsigned long long a = (d*h)/2;
        unsigned long long nt = n*a;
        
        cout<<nt<<endl;
    }
    return 0;
}