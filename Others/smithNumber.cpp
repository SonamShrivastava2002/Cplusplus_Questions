//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int smithNum(int n) {
        // code here
        int sum = 0;
        int num = n;
        while(num > 0){
            int temp = num%10;
            num = num/10;
            sum += temp;
        }
        int fac = 2;
        unordered_map<int,int> mp;
        int limit = n;
        while(n > 1 && fac < limit){
            if(n % fac == 0){
                n = n/fac;
                mp[fac]++;
            }
            else{
                fac++;
            }
        }
        int ans = 0;
        for(auto i:mp){
            int num = i.first;
            if(i.first > 9){
                while(num > 0){
                    int temp = num%10;
                    num = num/10;
                    mp[temp]++;
                }
            }
            mp.erase(i.first);
        }
        for(auto i:mp){
            ans += (i.first * i.second);
        }
        if(ans == sum){
            return 1;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends