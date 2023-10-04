#include <iostream>
using namespace std;
bool isPresent(int arr[][5],int find,int n,int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(arr[i][j]==find){
                return 1;
            }
        }
    }
    return 0;
}
void sum_rows(int arr[][5],int n,int m){
    cout<<"Row wise sum:"<<endl;
    for (int i=0;i<n;i++){
        int sum=0;
        for (int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void sum_cols(int arr[][5],int n,int m){
    cout<<"column wise sum:"<<endl;
    for (int i=0;i<m;i++){
        int sum=0;
        for (int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int largets_row_index(int arr[][5],int n,int m){
    cout<<"sum and index of row with largest sum:";
    int large=INT32_MIN;
    int index = -1;
    for (int i=0;i<n;i++){
        int sum=0;
        for (int j=0;j<m;j++){
            sum+=arr[i][j];
        }   
        if (sum>large){
            large = sum;
            index = i;
        } 
    }
    cout<<large<<endl;
    return index;
}
int main(){
    int arr[3][5];
    //ROW-WISE i/p
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //COLUMN-WISE i/p
    /*for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }*/
    /*int arr1[3][5]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6};
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int arr2[3][5]={{1,2,3,4,5},{6,7,8,9,1},{2,3,4,5,6}};
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }*/
    /*int find;
    cin>>find;
    if (isPresent(arr,find,3,5)){
        cout<<"Found Successfully";
    }
    else{
        cout<<"Missing";
    }*/
    sum_rows(arr,3,5);
    sum_cols(arr,3,5);
    cout<<largets_row_index(arr,3,5)<<endl;
    return 0;
}