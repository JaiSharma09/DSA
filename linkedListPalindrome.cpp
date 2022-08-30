#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int d){
    data =d;
    next =NULL;
}
};
void insertionAtEnd(Node *&tail, int d){
    Node *newNode = new Node(d);
    tail->next=newNode;
    tail = newNode;
}
Node * getMiddle(Node *&head){
    if(head==NULL){
cout<<"The list is Empty";
    return NULL;
    }
   Node *fast = head;
   Node *slow = head;
   while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next; 
   }
   return slow;
}
Node *reverse(Node *&head){
    Node *curr=head;
    Node *prev=NULL;
    Node *next=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool palindrome(Node *&head){
    Node *middle =getMiddle(head);
    Node *temp= middle->next;
    middle->next=reverse(temp);
   Node *head1= head;
   Node *head2=middle->next;
    while(head2!=NULL){
        if (head1->data!=head2->data)
        {
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
        temp=middle->next;
        middle->next=reverse(temp);
        return 1;
}
int main(){
    Node *first = new Node(4);
    Node *head = first;
    Node *tail = first;
    insertionAtEnd(tail, 3);
    insertionAtEnd(tail, 2);
    insertionAtEnd(tail, 1);
    insertionAtEnd(tail, 2);
    insertionAtEnd(tail, 3);
    insertionAtEnd(tail, 4);
    cout<<palindrome(head);
    return 0;
}