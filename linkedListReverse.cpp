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
Node *reverse(Node *&head){
    if (head == NULL)
    {
        cout<<"List is empty";
        return head;
    }
    
    Node *curr = head;
    Node *prev =NULL;
    while(curr!= NULL){
    Node *nextNode = curr->next;
    curr->next =prev;
    prev=curr;
    curr=nextNode;
    }
    return prev;
}
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
int main(){
Node *first = new Node(7);
  Node* head = first;
  Node *tail = first;
  InsertionAtEnd(tail, 4);
  InsertionAtEnd(tail, 5);
  InsertionAtEnd(tail, 8);
  InsertionAtEnd(tail, 9);
  InsertionAtEnd(tail, 0);
  traverse(head);
  cout<<endl;
  head = reverse(head);
  traverse(head);
    return 0;
}