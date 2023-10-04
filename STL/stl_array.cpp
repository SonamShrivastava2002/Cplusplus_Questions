//STL Arrays
#include <iostream>
/*stl library*/ #include <array>
using namespace std;
int main(){
     /*basic array*/int basic[3]={1,2,3};
     /*stl array*/ array<int,4> a = {42,8,5,4};   //stl array is a static array
     int size = a.size();
     for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index:"<<a.at(2)<<endl;
    cout<<"Empty or not:"<<a.empty()<<endl;
    //first element
    cout<<"first element:"<<a.front()<<endl;
    //last element
    cout<<"last element:"<<a.back()<<endl;
    return 0;
} 