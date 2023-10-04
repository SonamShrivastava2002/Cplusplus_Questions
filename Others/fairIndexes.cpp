#include <bits/stdc++.h>
using namespace std;
int totalIndexes(vector<int> &A, vector<int> &B) {
    int k = 0;
    set<int> st1,st2;
    int n = A.size();
    //cout<<n<<endl;
    long long sumA=0,sumB=0;
    for(int i=0;i<n;i++){
        sumA += A[i];
        sumB += B[i];
    }
    //cout<<sumA<<" "<<sumB<<endl;
    if(sumA == sumB){
        long long sum1 = 0,sum2 = 0;
        for(int i=0;i<n-1;i++){
            sum1 += A[i];
            sum2 += B[i];
            if(sum1 == sum2 && sum1 == sumA - sum1){
                k++;
            }
        }
    }
    return k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n),B(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        int ans = totalIndexes(A,B);
        cout<<ans<<endl;
    }
    return 0;
}