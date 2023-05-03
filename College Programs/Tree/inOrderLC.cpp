#include<bits/stdc++.h>
using namespace std;

class TreeNode{
      public:
      int data;
      TreeNode* left;
      TreeNode* right;

      TreeNode(int data){
               this->data=data;
               this->left=NULL;
               this->right=NULL;
       }
};

void inOrder(TreeNode* root){
    if(!root){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<end;
    inOrder(root->right);
}




int main(){
    TreeNode* root = NULL;
    inOrder(root);
return 0;
}
