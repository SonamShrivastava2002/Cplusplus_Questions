#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        //a+b>2
        //a-col,b-row
        int h,w;
        int left = x;
        int right = a-x-1;
        int up = y;
        int down = b-y-1;
        // l or r
        if(left>=right){
            w = left;
            h = b;
        }
        else{
            w = right;
            h = b;
        }
        int area1 = w*h;
        if(up>=down){
            h = up;
            w = a;
        }
        else{
            h = down;
            w = a;
        }
        int area2 = w*h;
        int final = max(area1,area2);
        cout<<final<<endl;
    }
    
    return 0;
}