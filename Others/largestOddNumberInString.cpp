#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int n = num.length();
        for(int i=n-1;i>=0;i--){
            if(num[i]%2 != 0){
                return num;
            }
            else{
                num.erase(i);
            }
        }
        return ans;
    }
};