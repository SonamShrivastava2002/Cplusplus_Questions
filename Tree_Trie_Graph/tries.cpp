#include <bits/stdc++.h>
using namespace std;
class trieNode{
    public:
    char data;
    trieNode* children[26];
    bool isTerminal;
    trieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class trie{
    public:
    trieNode* root;
    trie(){
        root = new trieNode('\0');
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
            root -> children[index] = child;
        }
        //recursive call
        insertUtil(child,word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }
    bool searchUtil(trieNode* root, string word){
        //base case
        if(word.length() == 0){
            return root -> isTerminal;
        }
        int index = word[0] - 'a';
        trieNode* child;
        //present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        //absent
        else{
            return false;
        }
        //recursive call
        return searchUtil(child,word.substr(1));
    }
    bool searchWord(string word){
        return searchUtil(root,word);
    }
};
int main(){
    trie *t = new trie();
    t -> insertWord("arm");
    t -> insertWord("do");
    t -> insertWord("time");
    cout<<"Present or Not:"<<t -> searchWord("tim")<<endl;
    return 0;
}