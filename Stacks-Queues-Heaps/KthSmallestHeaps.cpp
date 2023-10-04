#include<bits/stdc++.h>
using namespace std;
//User function template for C++
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //creating max heap
        priority_queue<int> pq;
        //step1
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        //step2
        for(int i=k;i<=r;i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        //ans = pq.top();
        int ans = pq.top();
        return ans;
    }
};
int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];      
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}