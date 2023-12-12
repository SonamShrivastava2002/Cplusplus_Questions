//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool isPrime(int n){
       for(int i=2;i<=n/2;i++){
           if(n%i == 0){
               return false;
           }
       }
       return true;
    }
    int minNumber(int arr[],int N)
    {
        int ans = 0;
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += arr[i];
        }
        if(sum == 1){
            return 1;
        }
        else if(isPrime(sum)){
            return ans;
        }
        else{
            while(!isPrime(sum)){
                sum += 1;
                ans += 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends