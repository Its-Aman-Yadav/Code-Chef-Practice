#include<bits/stdc++.h>
using namespace std;


//crearting a node of tree
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){         //user defined Constructor setting left and right to null
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//generate tree function 
TreeNode* generateTree(TreeNode* root){
         int data; cin>>data;
         root = new TreeNode(data);
         
         if(data==-1)
           return NULL;
        
         root->left = generateTree(root->left);      //generating left node
         root->right = generateTree(root->right);    //generating right node
         return root;
          
}

void levelWise(TreeNode* root){
          queue<TreeNode*> q;
          q.push(root);

          while (!q.empty()){
                root = q.front();
                q.pop();

                cout<<root->data<<" ";
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
          }
          
}

//driver code 
int main(){
    TreeNode* root=NULL;           
    root=generateTree(root);
    levelWise(root);
}