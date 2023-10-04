#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallest(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallest(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestArea(vector<int>& heights){
    int n = heights.size();
    vector<int> nex(n);
    nex = nextSmallest(heights,n);
    vector<int> pre(n);
    pre = prevSmallest(heights,n);
    int area = -1;
    for (int i=0;i<n;i++){
        int l = heights[i];
        if(nex[i] == -1){
            nex[i] = n;
        }
        int b = nex[i] - pre[i] - 1;
        int newA = l*b;
        area = max(area,newA);
    }
    return area;
}
int main(){
    vector<int> heights;
    int n = 7;
    for (int i=0;i<n;i++){
        int temp;
        cin>>temp;
        heights.push_back(temp);
    }
    for (int i=0;i<n;i++){
        cout<<heights[i]<<" ";
    }
    cout<<endl;
    int a = largestArea(heights);
    cout<<a<<endl;
    return 0;
}