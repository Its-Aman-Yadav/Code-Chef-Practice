#include<bits/stdc++.h>
using namespace std;

class Node{
      public:
       int data;
       Node* next;
       
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }

};

bool isNodePresent(Node* head, Node* target){
    while(head!=NULL){
      if(head==target)
        return true;
    }
    head=head->next;
}

Node* getIntersection(Node* head, Node* head2){
      while(head2 != NULL){
          if(isNodePresent(head, head2)) 
             return head2;
      }
      head2 = head2->next;
}

int main(){
    Node* node1 = new Node(1);
}
