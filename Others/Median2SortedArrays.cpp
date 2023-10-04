//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void mergingArrays(vector<int> &arr1,vector<int> &arr2,vector<int> &arr){
        int i=0;
        int j=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i] > arr2[j]){
                arr.push_back(arr2[j]);
                j++;
            }
            else{
                arr.push_back(arr1[i]);
                i++;
            }
        }
        while(i<arr1.size()){
            arr.push_back(arr1[i]);
            i++;
        }
        while(j<arr2.size()){
            arr.push_back(arr2[j]);
            j++;
        }
        
    }
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int n = array1.size();
        int m = array2.size();
        vector<int> mergedArray;
        mergingArrays(array1,array2,mergedArray);
        /*for(int i=0;i<mergedArray.size();i++){
            cout<<mergedArray[i]<<" ";
        }*/
        double ans = 0;
        if(mergedArray.size()%2 == 0){
            ans = (float)(mergedArray[(mergedArray.size())/2] + mergedArray[((mergedArray.size())/2)-1])/2;
        }
        else{
            ans = mergedArray[(mergedArray.size())/2];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}