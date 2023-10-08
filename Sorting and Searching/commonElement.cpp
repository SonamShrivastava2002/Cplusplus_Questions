#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:    
        bool binary(int arr[],int s,int e,int k){
            int mid = e + (s-e)/2;
            if(s > e){
                return false;
            }
            if(arr[mid] == k){
                return true;
            }
            else if(arr[mid] > k){
                return binary(arr,s,mid - 1,k);
            }
            else if(arr[mid] < k){
                return binary(arr,mid + 1,e,k);
            }
        }
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
            vector<int> ans;
            set<int> temp;
            for(int i=0;i<n1;i++){
                if(binary(B,0,n2-1,A[i])){
                    temp.insert(A[i]);
                }
            }
            for(auto i:temp){
                if(binary(C,0,n3-1,i)){
                    ans.push_back(i);
                }
            }
            return ans;
        }
};
int main (){
    int t; cin >> t;
    while (t--){
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        Solution ob;
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends