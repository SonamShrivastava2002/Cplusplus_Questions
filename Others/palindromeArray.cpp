//{ Driver Code Starts
#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool checkPalin(int &a){
        int n = a;
        int temp = 0;
        while(a>=1){
            int m = a%10;
            temp = temp*10 + m;
            cout<<m<<" "<<temp<<" "<<endl;
            a = a/10;
        }
        cout<<temp<<endl;
        if(temp == n){
            return true;
        }
        return false;
    }
    int PalinArray(int a[], int n)
    {
        int l = 0;
    	for(int i=0;i<n;i++){
            if(checkPalin(a[i])){
                l++;
            }
        }
        if(l==n){
            return 1;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends