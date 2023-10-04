//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int value(char ch){
        if(ch == 'I'){
            return 1;
        }
        else if(ch == 'V'){
            return 5;
        }
        else if(ch == 'X'){
            return 10;
        }
        else if(ch == 'L'){
            return 50;
        }
        else if(ch == 'C'){
            return 100;
        }
        else if(ch == 'D'){
            return 500;
        }
        else if(ch == 'M'){
            return 1000;
        }
        return -1;
    }
    int romanToDecimal(string &str) {
        int ans = 0;
        int n = str.length();
        for(int i=0;i<n;i++){
            int temp1 = value(str[i]);
            if(i+1 < n){
                int temp2 = value(str[i+1]);
                if(temp1 >= temp2){
                    ans += temp1;
                }
                else{
                    ans += (temp2 - temp1);
                    i++;
                }
            }
            else{
                ans += temp1;
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}