#include<bits/stdc++.h>
using namespace std;

bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        // intially
        q.push(root);
        bool nullFound = false;

        // ab queue me travese kr rahe ho
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                nullFound = true;
            }
            else{
                if(nullFound == true){
                    return false;
                }
                q.push(front->left);
                q.push(front->right);
            }
        }
        return nullFound;
}
int main(){

return 0;
}