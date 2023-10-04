#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={3,4,5,1,2};
    int n=nums.size();
    int count=0;
    for(int i=1;i<n;i++){
        if (nums[i-1]>nums[i]){
            count++;
        }
    }
    if (nums[n-1]>nums[0]){
        count++;
    }
    if (count<=1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}