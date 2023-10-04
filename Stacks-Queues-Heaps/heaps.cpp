#include <bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size = 0;
    heap(){
        arr[0]  = -1;
        size = 0;
    }
    //TC - O(log(n))
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    //TC - O(logn)
    void deletion(){
        if(size == 0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        //take the root element to its correct position
        int i=1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex = 2*i + 1;
            if(leftindex < size && arr[leftindex] > arr[i]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            }
            else{
                return;
            }
        }
    }
};
//max heap
void heapify_max(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;
    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify_max(arr,n,largest);
    }
}
//min heap(with 0-based indexing)
void heapify_min(int arr[],int n,int i){
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        heapify_min(arr,n,smallest);
    }
}
void heapSort(int arr[],int n){
    int size = n;
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify_max(arr,size,1);
    }
}
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletion();
    h.print();
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    //max heap
    for(int i=n/2;i>0;i--){
        heapify_max(arr,n,i);
    }
    cout<<"After heapifying the array:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //min heap
    int arr1[5] = {54,53,55,52,50};
    int n1 = 5;
    for(int i=n1/2-1;i>=0;i--){
        heapify_min(arr1,n1,i);
    }
    cout<<"After heapifying the array:"<<endl;
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    //heap sort
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}