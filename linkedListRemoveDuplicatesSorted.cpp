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
Node *removeDuplicates(Node *&head){
    Node *curr = head;
    while (curr!=NULL)
    {
        if(curr->next!=NULL && curr->data==curr->next->data){
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next=next_next;
        }
        else{
            curr= curr->next;
        }
    }
    return head;
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
    Node *first = new Node(1);
    Node *head = first;
    Node *tail = first;
    InsertionAtEnd(tail, 2);
    InsertionAtEnd(tail, 2);
    InsertionAtEnd(tail, 3);
    InsertionAtEnd(tail, 4);
    InsertionAtEnd(tail, 4);
    removeDuplicates(head);
    traverse(head);
    return 0;
}