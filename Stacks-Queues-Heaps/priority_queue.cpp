#include <iostream>
#include <queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> max_heap;
    max_heap.push(17);
    max_heap.push(29);
    max_heap.push(40);
    max_heap.push(28);
    //min heap;
    priority_queue<int,vector<int>,greater<int>> min_heap;
    min_heap.push(7);
    min_heap.push(9);
    min_heap.push(4);
    min_heap.push(2);
    int n=max_heap.size();
    for (int i=0;i<n;i++){
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }
    int n_min=min_heap.size();
    for (int i=0;i<n_min;i++){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    cout<<"\n";
    cout<<"empty or not:"<<min_heap.empty()<<endl;
    return 0;
}