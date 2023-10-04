#include <iostream>
using namespace std; 
bool binary_search2(int arr[][5],int n,int m,int target){
    int r = 0;
    int c = m-1;
    while(r<n && c>=0){
        int element = arr[r][c];
        if(element == target){
            return 1;
        }
        else if(element > target){
            c--;
        }
        else{
            r++;
        }
    }
    return 0;
}
int main(){
    // all elements in a row and column are sorted
    int arr[5][5] = {{1,4,7,11,15}
                    ,{2,5,8,12,19},
                    {3,6,9,16,22},
                    {10,13,14,17,24},
                    {18,21,23,26,30}};
    int target;
    cin>>target;
    cout<<binary_search2(arr,5,5,target);
    return 0;
}