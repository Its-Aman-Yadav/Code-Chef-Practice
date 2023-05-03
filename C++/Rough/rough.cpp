#include <bits/stdc++.h>
using namespace std;

struct Node {

    struct Node* next;
    int data;
    struct Node* prev;
};

Node* head = NULL;

bool isEmpty() {
    if (head == NULL)
        return true;

    return false;
}
void top_element()
{
    if (isEmpty())
        cout << "stack is empty" << endl;
    else
        cout << "Top: " << head->data << endl;
}
void push(int data) {

    struct Node* temp;
    temp = new Node();
    if (isEmpty())
    {
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;
    }
    else
    {   temp->data = data;
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
}

void stack_size()
{
    int count = 0;

    Node* curr = head;

    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }

    cout << "size: " << count << endl;
}

void pop() {

    struct Node* temp;
    temp = new Node();

    if (isEmpty())
        cout << "stack is empty" << endl;
    else if (head->next == NULL && head->prev == NULL)
    {
        temp = head;
        head = NULL;
        delete(head);
    }
    else
    {   temp = head;
        head = head->next;
        head->prev = NULL;
        delete(temp);
    }
}

void print_stack() {

    Node* curr = head;

    cout << "elements are: ";

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;

    }

    cout << endl;

}

int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print_stack();
    stack_size();
    top_element();
    pop();
    print_stack();
    stack_size();
    pop();
    print_stack();
    stack_size();
    top_element();
    return 0;
}