#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    string findLargest(int N, int S){
        string ans = "";
        int n = 9;
        int a = 0;
        for(int i=0;i<N;i++){
            while(n <= S){
                //cout<<n<<endl;
                S = S - n;
                a = a*10 + n;
            }
        }
        a = a*10 + S;
        ans = to_string(a);
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}