#include <iostream>
using namespace std;
bool find_let(string s){
    int fr,fg,fb;
    int fR,fG,fB;
    fr = s.find('r');
    fb = s.find('b');
    fg = s.find('g');
    fR = s.find('R');
    fB = s.find('B');
    fG = s.find('G');
    int count=0;
    if(fr<fR){
        count++;
    }
    if(fb<fB){
        count++;
    }
    if(fg<fG){
        count++;
    }
    if (count==3){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(find_let(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}