#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> isSum(int arr[],int n,int sum){
        bool t[n+1][sum+1];
        vector<int> ans;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0){
                    t[i][j] = false;
                }
                if(j==0){
                    t[i][j] = true;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                //cout<<j<<endl;
                if(arr[i-1] > j){
                    t[i][j] = t[i-1][j];    
                }
                else if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
                }
            }
        }
        for(int i=0;i<=sum/2;i++){
            if(t[n][i] == true){
                ans.push_back(i);
            }
        }
        return ans;
    }
	int minDifference(int arr[], int n){ 
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        vector<int> check = isSum(arr,n,sum);
        for(int i=0;i<check.size();i++){
            cout<<check[i]<<" ";
        }
        cout<<endl;
        int m = check.size();
        cout<<m<<endl;
        int mn = INT_MAX;
        for(int i=0;i<m;i++){
            mn = min(mn,sum - 2*check[i]);
        }
        return mn;
	} 
};
int main(){
   	/*int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];
	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";	     
    }*/
    int arr[8] = {5,6,6,5,7,4,7,6};
    int n = 8;
    Solution ob; 
    //vector<bool> ans = ob.isSum(arr,n,sum);
    /*for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }*/
    cout<<ob.minDifference(arr,n)<<endl;
    return 0;
}