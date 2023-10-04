#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int isSum(vector<int> &arr,int n,int k){
        int mod = 1e9 + 7;
        int t[n+1][k+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(i==0){
                    t[i][j] = 0;
                }
                if(j==0){
                    t[i][j] = 1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                if(arr[i-1] > j){
                    t[i][j] = (t[i-1][j])%mod;
                }
                else if(arr[i-1] <= j){
                    t[i][j] = (t[i-1][j] + t[i-1][j-arr[i-1]])%mod;
                }
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++){
                cout<<t[i][j]<<" ";
            }
            //2 40 6 6 43 44 12 12 10 32 26 31 48 14 38 42 25
            cout<<endl;
        }
        return t[n][k]%mod;
    }
    int countPartitions(int n, int d, vector<int>& arr){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        int s1 = (d+sum)/2;
        cout<<s1<<endl;
        int ans = isSum(arr,n,s1);
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}