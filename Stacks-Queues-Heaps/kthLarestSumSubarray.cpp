#include <bits/stdc++.h>
using namespace std;
int getKthLargest(vector<int> &arr, int k){
	//TC - O(n^2log(n)),SC-O(n^2)
    /*int n = arr.size();
    vector<int> sums;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[j];
            sums.push_back(sum);
        }
    }
    sort(sums.begin(),sums.end());
    int ans = sums[k-1];
    return ans;*/
    //TC-O(n^2),SC-O(k)
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i=0;i<arr.size();i++){
        int sum = 0;
        for(int j=i;j<arr.size();j++){
            sum += arr[j];
            if(minHeap.size()<k){
                minHeap.push(sum);
            }
            else{
                if(sum>minHeap.top()){
                    minHeap.pop();
                    minHeap.push(sum);
                }
            }
        }
    }
    int ans = minHeap.top();
    return ans;
}