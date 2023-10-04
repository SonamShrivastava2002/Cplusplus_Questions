#include <iostream>
#include <string>
using namespace std;
string reversed(string s){
    int n=s.length();
    //cout<<n<<endl;
    //cout<<s<<endl;
    string temp="";
    string final;
    for (int i=n-1;i>=0;i--){
        if(s[i]!=' '){
            temp.push_back(s[i]); 
            //cout<<temp<<endl;   
        }
        else{
            for (int j=temp.length();j>=0;j--){
                final.push_back(temp[j-1]);   
            }
            cout<<final<<endl;
            cout<<s<<endl;
            cout<<s.find(final)<<endl;
            final="";
            //s.erase(s.find(final),s.length());
            for (int j=temp.length();j>=0;j--){
                //swap(temp[j-1],temp[n-j]);
                cout<<temp<<endl;
                s.push_back(temp[j-1]);
                //final.push_back(temp[j-1]);*/ 
            }
            s.push_back(' ');
            temp="";
        }
        
    }
    for (int j=temp.length();j>=0;j--){
        s.push_back(temp[j-1]);
        //cout<<final<<endl;
    }
    return s;
}
/*string reversed(string s){
    string st="";
    string e="";
    int n=s.length();
    int i=n-1;
    while (i>=0){
        if(s[i]!=' '){
            st.push_back(s[i]);
        }
        //cout<<st<<endl;
        if(s[i]!=0){
            s.push_back(s[i]);
        }
        cout<<s<<endl;
        if(s[i]==' '){

        }
        i--;
    }
    return s;
}*/
int main(){
    //i/p
    string s = "My name is Sonam";
    //o/p = "Sonam is name My";
    cout<<reversed(s);
    return 0;
}