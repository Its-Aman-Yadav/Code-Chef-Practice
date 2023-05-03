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

void trinagularLevelOrder(TreeNode* root){                 //it will print like this
     queue<TreeNode*> q;                                   // 1
     q.push(root);                                         // 2 3 
     q.push(NULL);                                         // 4 5 6

     while(!q.empty()){
          TreeNode* temp= q.front();
          q.pop();

          if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
          }

          else{
            cout<<temp->data<<endl;
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
          }     
     }
}

void levelOrder(TreeNode* root){                   //it will print like this
     queue<TreeNode*> q;                           // 1 2 3 4 5 6
     q.push(root);

     while(!q.empty()){
        TreeNode* temp = q.front();
        cout<<temp->data<<endl;
        q.pop();

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

     }
}

int main(){
    TreeNode* root = NULL;
    levelOrder(root);
return 0;
}
