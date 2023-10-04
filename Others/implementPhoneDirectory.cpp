#include <bits/stdc++.h>
using namespace std;
//TC - O(n*(m^2)),SC-O(n*m)
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
    void printSuggetions(trieNode* curr,vector<string> &temp,string prefix){
        if(curr -> isTerminal){
            temp.push_back(prefix);
        }
        for(char c='a';c<='z';c++){
            trieNode* next = curr -> children[c - 'a'];
            if(next != NULL){
                prefix.push_back(c);
                printSuggetions(next,temp,prefix);
                prefix.pop_back();
            }
        }
    }
    vector<vector<string>> getSuggetions(string str){
        trieNode* pre = root;
        vector<vector<string>> output;
        string prefix = "";
        for(int i=0;i<str.length();i++){
            char lastch = str[i];
            prefix.push_back(lastch);
            //check for last ch
            trieNode* curr = pre->children[lastch - 'a'];
            //if not found
            if(curr == NULL){
                break;
            }
            //if found
            vector<string> temp;
            printSuggetions(curr,temp,prefix);
            output.push_back(temp);
            temp.clear();
            pre = curr;
        }
        return output;
    }
};
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr){
    //creation of trie
    trie *t = new trie();
    //insert all contact in the trie
    for(int i=0;i<contactList.size();i++){
        string str = contactList[i];
        t->insertWord(str);
    }
    return t->getSuggetions(queryStr);
}