#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    Node head;
    public:
    void insert_at_end(int data);
};

void insert_at_end(int data, int *head){
    Node *temp = new Node(data);
    temp->data = data;
    if (head == NULL){
        head = temp;
    }
    else{
        Node *ptr = head;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

int main(){
    insert_at_end(5);
}