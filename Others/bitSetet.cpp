//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        bitset<28> b(n);
        int ans = 0;
        cout<<b<<endl;
        //cout<<b.size()<<endl;
        //cout<<b[23]<<endl;
        for(int i = b.size()-1;i>=0;i--){
            cout<<b[i]<<" ";
            if(b[i] == 1){
                ans = i+1;
            }
            cout<<i<<" ";
            cout<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends