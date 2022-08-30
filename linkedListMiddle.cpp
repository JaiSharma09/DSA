#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
      data =d;
      next = NULL;
    }
};
void InsertionAtEnd(Node *&tail, int d){
    Node *newNode = new Node(d);
     tail->next=newNode;
    tail=newNode;
}
void traverse(Node *&head){
    Node *temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}
Node *getMiddle(Node *&head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return NULL;
    }
    Node *slow =head;
    Node *fast =head;
    while (fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow =slow->next;
    }
    return slow;
}
int main(){
    Node *newNode = new Node(7);
    Node *head = newNode;
    Node *tail = newNode;
    InsertionAtEnd(tail, 4);
    InsertionAtEnd(tail, 5);
    InsertionAtEnd(tail, 3);
    InsertionAtEnd(tail, 1);
    InsertionAtEnd(tail, 9);
    InsertionAtEnd(tail, 8);
    InsertionAtEnd(tail, 2);


    traverse(head);
    cout<<endl;
    Node *middle = getMiddle(head);
    cout<<"Middle is at "<<middle->data;
    return 0;
}