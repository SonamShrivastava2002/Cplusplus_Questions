#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr,int n){
    for (int i=0;i<n;i++){
        //for round 1 to n-1;
        bool swapped = false;
        for (int j=0;j<n-i;j++){
            //process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            //already sorted
            break; 
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    bubbleSort(v,n);
    for (int j:v){
        cout<<j<<" ";
    }
    return 0;
}