#include <iostream>
#include <vector>
#include <math.h>
#include <deque>
using namespace std;
vector<int> reverse(vector<int> arr){
	int s=0;
	int n=arr.size();
    int e=n-1;
    for (;s<=e;s++){
        swap(arr[s],arr[e]);
        e--;
    }
    return arr;
}
int main(){
    vector<int> arr1={4,5,1};
    vector<int> arr2={3,4,5};
    vector<int> arr;
    int temp;
    int ans1=0,ans2=0;
    for (int i:arr1){
        ans1=ans1*10 + i;
    }
    for (int j:arr2){
        ans2=ans2*10 + j; 
    }
    int ans;
    ans=ans1+ans2;
    int i=0;
    while(ans!=0){
        temp=ans%10;
        ans = (ans - temp)/10;
        arr.push_back(temp);
        i++;
    }
	arr=reverse(arr);
	for (int i:arr){
        cout<<i<<" ";
    }
    /*deque<int> arr;
    int temp;
    int ans1=0,ans2=0;
    int n=3,m=3;
    for (int i:arr1){
        //cout<<i<<endl;
        ans1=ans1*10 + i;
        //cout<<ans1<<endl;
    }
    cout<<ans1<<endl;
    for (int j:arr2){
        //cout<<j<<endl;
        ans2=ans2*10 + j;
        //cout<<ans2<<endl; 
    }
    cout<<ans2<<endl;
    int ans;
    ans=ans1+ans2;
    cout<<ans<<endl;
    int i=0;
    while(ans!=0){
        temp=ans%10;
        ans = (ans - temp)/10;
        arr.push_front(temp);
        cout<<temp<<" ";
        i++;
    }
    cout<<endl;
    for (int i:arr){
        cout<<i<<" ";
    }*/
    return 0;
}