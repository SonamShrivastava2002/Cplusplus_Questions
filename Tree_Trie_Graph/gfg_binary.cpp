#include <bits/stdc++.h>
using namespace std;
  
// Driver's code
int main()
{
    // initializing vector of integers
    vector<int> arr = {7,14,17,29,35,37};
  
    // using binary_search to check if 15 exists
    if (binary_search(arr.begin(), arr.end(), 2187637))
        cout << "17 exists in vector";
    else
        cout << "17 does not exist";
  
    cout << endl;
  
    // using binary_search to check if 23 exists
    if (binary_search(arr.begin(), arr.end(), 29))
        cout << "29 exists in vector";
    else
        cout << "29 does not exist";
  
    cout << endl;
}