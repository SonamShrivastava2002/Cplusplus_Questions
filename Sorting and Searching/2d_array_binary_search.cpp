#include <iostream>
using namespace std;
bool binary_search(int arr[][4],int n, int m,int target){
    int s = 0;
    int e = m*n - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        int element = arr[mid/m][mid%m];
        if (element == target){
            return 1;
        }
        else if(element>=target){
                e = mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}
int main(){
    // all elements in a row are sorted
    int arr[3][4] = {{1,3,5,7},
                    {10,11,16,20},
                    {23,30,34,60}};
    int target;
    cin>>target;
    cout<<binary_search(arr,3,4,target);
    return 0;
}