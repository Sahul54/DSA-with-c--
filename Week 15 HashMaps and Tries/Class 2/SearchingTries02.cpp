#include<bits/stdc++.h>
using namespace std;

class TriesNode{
    public:
    char value;
    TriesNode *children[26];
    bool isTerminal;

    TriesNode(char val){
        this->value = val;
        for(int i=0;i<26; i++){
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

// Insertion Function
void insertWord(TriesNode* root, string word){
    // cout<<"recived Word "<<word<<" for insertion"<<endl;

    // base case;
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TriesNode* child;
    if(root->children[index] != NULL){
        // Present
        child = root->children[index];
    }
    // Absent
    else{
        child = new TriesNode(ch);
        root->children[index] = child;
    }

    // recursion
    insertWord(child, word.substr(1));
}


// Searching
bool searchWord(TriesNode* root, string word){
    // base case
    if(word.length() == 0){
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    TriesNode* child;

    if(root->children[index] != NULL){
        // Present or found
        child = root->children[index];
    }
    else{
        // not found
        return false;
    }
    // Baki recursion
    bool ans = searchWord(child, word.substr(1));
    return ans;
}

int main(){
TriesNode* root = new TriesNode('_');
insertWord(root, "cater");
insertWord(root, "care");
insertWord(root, "cdm");
insertWord(root, "lover");
insertWord(root, "load");
insertWord(root, "bat");
insertWord(root, "cat");
insertWord(root, "lov");
insertWord(root, "love");

cout<<"Insertion done!"<<endl;

if(searchWord(root, "loved")){
    cout<<"found";
}
else{
    cout<<"Not Found";
}
return 0;
}