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
Node* detectLoop(Node *&head){
    if(head == NULL)
    return NULL;

    Node *slow = head;
    Node *fast = head;
   while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
        return slow;
    }
   }
   return NULL;
}
bool detectAndDelete(Node *&head){
    if(head==NULL)
    return false;

    Node *fast = detectLoop(head);
    Node *slow = head;
    while (fast != slow)
    {
        slow = slow->next;
        fast = fast->next;
    }
    Node *beginingNode = slow;
    Node *temp = beginingNode;
    while (temp->next!=beginingNode)
    {
        temp = temp->next;
    }
    temp ->next= NULL;
    return true;
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
    Node *first = new Node(3);
    Node *head = first;
    Node *tail = first;
    InsertionAtEnd(tail, 8);
    InsertionAtEnd(tail, 4);
    InsertionAtEnd(tail, 5);
    InsertionAtEnd(tail, 4);
    Node *temp =tail;
    InsertionAtEnd(tail, 9);
    InsertionAtEnd(tail, 7);
    InsertionAtEnd(tail, 2);
    tail->next=temp;
    detectAndDelete(head);
    traverse(head);
        return 0;
}