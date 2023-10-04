#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int realpivot = s + cnt;
    swap(arr[realpivot],arr[s]);
    int i=s,j=e;
    while(i<realpivot && j>realpivot){
        while(arr[i]<=arr[realpivot]){
            i++;
        }
        while(arr[j]>arr[realpivot]){
            j--;
        }
        if(i<realpivot && j>realpivot){
            swap(arr[i++],arr[j--]);
        }
    }
    return realpivot;
}
void QuickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    //partition element index
    int p = partition(arr,s,e);
    //left part sort
    QuickSort(arr,s,p-1);
    //right part sort
    QuickSort(arr,p+1,e);
}
int main(){
    int n = 8;
    //cin>>n;
    int arr[8] = {6,6,-6,-2,-4,-6,2,-6};
    /*for (int i=0;i<n;i++){
        cin>>arr[i];
    }*/
    QuickSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}