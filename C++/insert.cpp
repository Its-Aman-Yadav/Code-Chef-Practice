#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){             //constructor
        this->data= data;
        this->next = NULL;
    }
};

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    
SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
SinglyLinkedListNode *nh= head;
for(int i=0;i<position-1;i++){
    nh=nh->next;
}
SinglyLinkedListNode *t;
t=nh->next ;
nh->next=temp;
temp->next=t;
return head;
}


int main(){
    
   Node* node1 = new Node(1);
   Node* node2 = new Node(2);
   Node* node3 = new Node(3);
   Node* node4 = new Node(4);

   Node* head = node1;
   node1->next = node2;
   node2->next = node3;
   node3->next = node4;

   Node* node0 = new Node(0);
   node0->next = node1;
   head = node0;


return 0;
}
