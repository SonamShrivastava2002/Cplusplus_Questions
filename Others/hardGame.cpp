//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int powerup(int N, int K, vector<int> &energyArr) {
        long long energy = 0;
        long long startEnergy = K;
        for(int i=N-1;i>=0;i--){
            energy += energyArr[i];
            if(energyArr[i] == 0){
                startEnergy += K;
            }
            if(energy <= startEnergy){
                return i;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> energyArr(N);
        for(int i=0;i<N;i++)
            cin>>energyArr[i];
        Solution obj;
        int res = obj.powerup(N, K, energyArr);
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends