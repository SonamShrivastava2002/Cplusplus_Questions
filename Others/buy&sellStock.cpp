#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//TC-O(n^2)
int maximumProfit(vector<int> &prices){
    int diff = 0;
    for(int i=0;i<prices.size();i++){
        int val = prices[i];
        for(int j= i+1;j<prices.size();j++){
            int v = prices[j];
            int d = v - val;
            diff = max(diff,d);
        }
    }
    return diff;
}
//TC - O(n)
int maximumProfit(vector<int> &prices){
    int diff = 0;
    int maxi = prices[0];
    for(int i=1;i<prices.size();i++){
       int newdiff = prices[i] - maxi;
       diff = max(newdiff,diff);
       maxi = min(maxi,prices[i]); 
    }
    return diff;
}