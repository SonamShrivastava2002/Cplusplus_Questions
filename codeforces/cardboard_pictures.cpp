#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        unsigned long long c;
        cin>>n>>c;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        unsigned long long w;
        unsigned long long square = 0;
        unsigned long long sum=0;
        for (int i = 0;i<n;i++){
            square = square + pow(arr[i],2);
            sum = sum + arr[i];
        }
        unsigned long long b = sum*4;
        unsigned long long a = 4*n;
        long long last = square - c;
        long long s = -1*4*a*last;
        long long u = pow(b,2);
        long long under_root = u + s;
        int n1;
        long long aDouble = 2*a;
        cout<<b<<" "<<a<<" "<<last<<" "<<s<<" "<<u<<" "<<under_root<<endl;
        if(under_root>=0){
            n1 = sqrt(under_root);
            n1 = n1 - b;
        }
        if(n1>0){
            w = n1/aDouble;
            cout<<w<<endl;
        }
    }
    return 0;
}