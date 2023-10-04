#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    int row;
    int col;
    node(int d,int i,int j){
        data = d;
        row = i;
        col = j;
    }
};
class compare{
    public:
    bool operator()(node* a,node* b){
        return a -> data >  b -> data;
    }
};
int kSorted(vector<vector<int>> &a, int k, int n) {
    int mini = INT32_MAX,maxi = INT32_MIN;
    priority_queue<node*,vector<node*>,compare> minHeap;
    //create a min heap for starting element of each list and tracking mini/maxi values
    for(int i=0;i<k;i++){
        int ele = a[i][0];
        mini = min(mini,ele);
        maxi = max(maxi,ele);
        minHeap.push(new node(ele,i,0));
    }
    int start = mini,end = maxi;
    //process ranges
    while (!minHeap.empty()){
        //mini fetch
        node* temp = minHeap.top();
        minHeap.pop();
        mini = temp -> data;
        //range or answer updation
        if(maxi - mini < end - start){
            start = mini;
            end = maxi;
        }
        //next element exists
        if(temp -> col + 1< n){
            maxi = max(maxi,a[temp -> row][temp -> col + 1]);
            minHeap.push(new node(a[temp -> row][temp -> col + 1],temp -> row,temp -> col + 1));
        }
        //not exists
        else{
            break;
        }
    }
    //returning difference of range values
    return (end - start + 1);
}