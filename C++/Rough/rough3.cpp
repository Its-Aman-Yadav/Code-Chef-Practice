#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void createLL(){
    int data;
    while(true){
        cin>>data;
        Node* node1 = new Node(data);
        if(data == -1){
            break;
        }
        
        if(node1->next==NULL){
            Node* head = node1;
            Node* tail = node1;
        }

        else{
            head->next = node1;
        }
    }
}

int main(){
    createLL();
return 0;
}
