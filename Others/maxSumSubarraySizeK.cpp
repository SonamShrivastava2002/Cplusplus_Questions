//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    //using sliding window
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum = 0;
        if(K == N){
            for(int i=0;i<N;i++){
                sum += Arr[i];
            }
        }
        else{
            long maxi = 0;
            for(int i=0;i<K;i++){
                maxi += Arr[i];
            }
            sum = max(maxi,sum);
            for(int i=K;i<N;i++){
                maxi -= Arr[i-K];
                maxi += Arr[i];
                sum = max(maxi,sum);
            }
        }
        return sum;
    }
    // long maximumSumSubarray(int K, vector<int> &Arr , int N){
    //     int sum = 0;
    //     if(K == N){
    //         for(int i=0;i<N;i++){
    //             sum += Arr[i];
    //         }
    //     }
    //     else{
    //         for(int i=0;i<N;i++){
    //             int maxi = 0;
    //             int k = i;
    //             for(int j=0;j<K && k<N;j++){
    //                 maxi += Arr[k];
    //                 k++;
    //             }
    //             sum = max(maxi,sum);
    //         }
    //     }
    //     return sum;
    // }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends