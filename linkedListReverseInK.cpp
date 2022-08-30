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
Node *reverseInK(Node *&head, int k){
    int count =0;
    if (head ==NULL)
    {
        return NULL;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr!=NULL&&count<k)
    {
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
       count++;
    }
    if(next!=NULL)
    head->next = reverseInK(next, k);
    return prev;                                                     
}
int main(){
    Node *first = new Node(5);
    Node *head = first;
    Node *tail = first;
    InsertionAtEnd(tail, 4);
    InsertionAtEnd(tail, 7);
    InsertionAtEnd(tail, 6);
    InsertionAtEnd(tail, 1);
    InsertionAtEnd(tail, 8);
    InsertionAtEnd(tail, 6);
    InsertionAtEnd(tail, 3);
    InsertionAtEnd(tail, 4);
    traverse(head);
    cout<<endl;
   head = reverseInK(head, 3);
    traverse(head);

    return 0;
}