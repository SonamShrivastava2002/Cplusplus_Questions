#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++){
            long long p,q;
            cin>>p>>q;
            v.push_back(make_pair(p,q));
        }
        long long d = 0;
        if(a<=k && b<=k){
            cout<<d<<endl;
        }
        else if(k>0){
            long long xa=0,ya=0,xb=0,yb=0;
            for(int i=0;i<n;i++){
                if(a == i+1){
                    xa = v[i].first;
                    ya = v[i].second;
                }
                if(b == i+1){
                    xb = v[i].first;
                    yb = v[i].second;
                }
                //cout<<xa<<" "<<ya<<" "<<xb<<" "<<yb<<endl;
            }
            long long d1 = abs(xa - v[k-1].first) + abs(ya - v[k-1].second);
            for(int i=0;i<k;i++){
                long long approx = abs(xa - v[i].first) + abs(ya - v[i].second);
                d1 = min(d1,approx);
                //cout<<d1<<endl;
            }
            long long d2 = abs(xb - v[k-1].first) + abs(yb - v[k-1].second);
            for(int i=0;i<k;i++){
                long long approx = abs(xb - v[i].first) + abs(yb - v[i].second);
                d2 = min(d2,approx);
                //cout<<d2<<endl;
            }
            d = d1 + d2;
            cout<<d<<endl;
        }
        if(k==0){
            long long xa=0,ya=0,xb=0,yb=0;
            for(int i=0;i<n;i++){
                if(a == i+1){
                    xa = v[i].first;
                    ya = v[i].second;
                }
                if(b == i+1){
                    xb = v[i].first;
                    yb = v[i].second;
                }
                //cout<<xa<<" "<<ya<<" "<<xb<<" "<<yb<<endl;
            }
            long long d3 = abs(xa - xb) + abs(ya - yb);
            long long d1 = abs(xa - v[0].first) + abs(ya - v[0].second);
            for(int i=1;i<n;i++){
                long long approx = abs(xa - v[i].first) + abs(ya - v[i].second);
                d1 = min(d1,approx);
                //cout<<d1<<endl;
            }
            long long d2 = abs(xb - v[0].first) + abs(yb - v[0].second);
            for(int i=1;i<k;i++){
                long long approx = abs(xb - v[i].first) + abs(yb - v[i].second);
                d2 = min(d2,approx);
                //cout<<d2<<endl;
            }
            long long d4 = d1 + d2;
            d = min(d3,d4);
            cout<<d<<endl;
        }
    }
    return 0;
}