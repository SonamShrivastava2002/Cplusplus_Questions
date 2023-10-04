#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isFrequencyUnique(int n, int arr[]){
        if(n == 1){
            return true;
        }
        else if(n == 2){
            if(arr[0] == arr[1]){
                return false;
            }
        }
        else{
            sort(arr,arr+n);
            int j = 0;
            for (int i=0;i<n;){
                int c = count(arr+i,arr+n,arr[i]);            
                arr[j] = c;
                j++;
                i = i+c;
            }
            
            sort(arr,arr+j);
            int c=0;
            for (int i=1;i<j;i++){
                cout<<arr[i-1]<<" ";
                if(arr[i] == arr[i-1]){
                    return false;
                    break;
                }
            }
        }
        return true;
}
int main(){
    int n = 141;
    int arr[n] = {-133,-119,-119,10,10,115,-119,-133,-133,115,57,-133,-119,115,-16,-31,-133,
                115,10,-133,53,-133,57,-78,-15,107,115,-15,-15,-31,-119,-31,-31,115,-119,-15,-15
                ,-15,-133,107,-78,-119,115,53,57,123,115,-68,10,-119,-133,-133,53,-15,10,-119,-15
                ,-133,-133,115,-16,115,-15,53,-15,53,115,-16,53,-78,57,-78,53,-133,-78,53,-15,
                -119,-31,-133,115,-119,115,53,15 ,53, 53, -16, 107 ,10 ,-119, -15, -71, -31, 115,
                115, -119, -15 ,123, 10 ,-119 ,10, -71, -133, -15 ,10, -31, 115 ,57 ,-15 ,123, 115
                , 115 ,-78, 10, 10 ,-71 ,107, 107, 10 ,115, -31, -78 ,-119 ,-16 ,-16, 107, -68, -78,
                 -31, -15 ,53, -15, -119 ,-31 ,10, 107, 123 ,115 ,10, -119};
    if(isFrequencyUnique(n,arr)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}