#include <bits/stdc++.h>
using namespace std;
//using trie
//TC-O(n*m),SC-O(n*m)
class trieNode{
    public:
    char data;
    trieNode* children[26];
    int childcnt;
    bool isTerminal;
    trieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        childcnt = 0;
        isTerminal = false;
    }
};
class trie{
    public:
    trieNode* root;
    trie(char ch){
        root = new trieNode(ch);
    }
    void insertUtil(trieNode* root,string word){
        //base case
        if(word.length() == 0){
            root -> isTerminal = true;
            return;
        }
        //assuming all letters in a word are small
        int index = word[0] - 'a';
        trieNode* child;
        //if present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        //if absent
        else{
            child = new trieNode(word[0]);
            root -> childcnt++;
            root -> children[index] = child;
        }
        //recursive call
        insertUtil(child,word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }
    void lcp(string str,string &ans){
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            if(root -> childcnt == 1){
                ans.push_back(ch);
                //aange badh jaao
                int index = ch - 'a';
                root = root -> children[index];
            }
            else{
                break;
            }
            if(root -> isTerminal){
                break;
            }
        }
    }
};
string longestCommonPrefix(vector<string> &arr, int n){
    trie *t = new trie('\0');
    //insert all strings into trie
    for(int i=0;i<n;i++){
        t->insertWord(arr[i]);
    }
    string first = arr[0];
    string ans = "";
    t->lcp(first,ans);
    return ans;
}
//using iterative method
//TC-O(n*m),SC-O(1)
string longestCommonPrefix(vector<string> &arr, int n){
    string ans = "";
    //traversing all characters of 1st string
    for(int i=0;i<arr[0].length();i++){
        char ch = arr[0][i];
        bool match = true;
        //for comparing ch with rest of the strings
        for(int j=1;j<n;j++){
            //not match
            if(ch != arr[j][i] || arr[j].size()<i){
                match = false;
                break;
            }
        }
        if(match == false){
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}