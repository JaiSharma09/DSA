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
int getLength(Node *&head){
    int count =0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next; 
    }
    return count;
}
Node *rotateByK(Node *&head, int k){
int n = getLength(head);
if (head==NULL || head->next==NULL || k==0 || k%n==0)
{
    return head;
}

Node *curr = head;
Node *prev = NULL;
k=k%n;
int t=n-k;
while (t--)
{
    prev=curr;
    curr= curr->next;
}
prev->next=NULL;
Node *tail = curr;
while (tail->next!=NULL)
{
    tail = tail->next;
}
tail->next=head;
return curr;
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
    Node *first = new Node(4);
    Node *head = first;
    Node *tail = first;
    InsertionAtEnd(tail, 5);
    InsertionAtEnd(tail, 1);
    InsertionAtEnd(tail, 9);
    InsertionAtEnd(tail, 7);
    InsertionAtEnd(tail, 2);
    traverse(head);
    cout<<endl;
    head = rotateByK(head, 2);
    traverse(head);
    return 0;
}