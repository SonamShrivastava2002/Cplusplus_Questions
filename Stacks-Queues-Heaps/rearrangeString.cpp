#include <bits/stdc++.h> 
using namespace std;
class charfreq{
    public:
    int freq;
    char ch;
    charfreq(int f,char c){
        freq = f;
        ch = c;
    }
};
class compare{
    public:
    bool operator()(charfreq* a,charfreq* b){
        return a -> freq < b -> freq;
    }
};
string reArrangeString(string &s){
	priority_queue<charfreq*,vector<charfreq*>,compare> maxHeap;
    int n = s.length();
    //store frequencies of all characters
    int arr[26] = {0};
    for(int i=0;i<n;i++){
        arr[s[i] - 'a']++;
    }
    //inserting all characters with their frequencies into priority queue
    for(char c = 'a';c<='z';c++){
        int val = c - 'a';
        if(arr[val]>0){
            maxHeap.push(new charfreq(arr[val],c));
        }
    }
    s = "";
    charfreq *pre = new charfreq(-1,'#');
    while(!maxHeap.empty()){
        charfreq* k = maxHeap.top();
        cout<<k->ch<<" "<<k->freq<<endl;
        maxHeap.pop();
        s = s + k->ch;
        if(pre->freq > 0){
            maxHeap.push(pre);
        }
        k->freq --;
        pre = k;
    }
    cout<<s<<" "<<s.length()<<endl;
    if(s.length() != n){
        s = "not possible";
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = reArrangeString(s);
        cout<<ans<<endl;
    }
    return 0;
}