#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[m];
	    int total_balls = 0;
	    for(int i=0;i<m;i++){
	        cin>>arr[i];
	        total_balls = total_balls + arr[i];
	    }
	    int box = 0;
	    while(total_balls >= n){
	        total_balls = total_balls - m;
	        box++;
	    }
	    cout<<box<<endl;
	}
	return 0;
}
