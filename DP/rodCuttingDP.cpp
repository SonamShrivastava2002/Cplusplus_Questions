#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int cutRod(int price[], int n) {
        int l[n];
        for(int i=0;i<n;i++){
            l[i] = i+1;
        }
        int t[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0){
                    t[i][j] = 0;
                }
                if(j==0){
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(l[i-1] <= j){
                    t[i][j] = max(price[i-1] + t[i][j-l[i-1]],t[i-1][j]);
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        return t[n][n];
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        Solution ob;
        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}