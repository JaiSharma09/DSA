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
void insertionAtBegining(Node *&head, int d){
    Node *newNode = new Node(d);
    newNode->next=head;
    head = newNode;
}
void InsertionAtEnd(Node *&tail, int d){
    Node *newNode = new Node(d);
     tail->next=newNode;
    tail=newNode;
}
void insertAtPosition(Node *&head, int pos, int d){
  
  
    if(pos==1)
    insertionAtBegining(head, d);

    else{
    Node *newNode = new Node(d);
      // because for inserting at 2 we have to move 0 times 
    // for 3 1 times so pos-2
    Node *prev =head;
    int t =pos-2;
    while (t--)
    {
        prev = prev->next;
    }
    newNode->next=prev->next;
    prev->next=newNode;
    }
}
void deleteNode(Node *&head, int target, int pos){
    if(head==NULL)
    return;
   Node *temp = head;
   Node *prev = NULL;
   if (target == temp->data && pos == 1){
   head = head->next;
    temp->next=NULL;
    delete temp;
   }

   else{
    while (temp->data!=target && temp!=NULL)
    {
        prev = temp;
        temp=temp->next;
    }
    if (temp==NULL)
    {
        cout<<"Element not Found"<<endl;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
   }
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
//   insertionAtBegining(head, 5);
//   insertionAtBegining(head, 7);
//   insertionAtBegining(head, 9);
//   insertionAtBegining(head, 11);
  insertionAtBegining(head, 5);
  insertionAtBegining(head, 9);
  insertionAtBegining(head, 0);
  InsertionAtEnd(tail, 1);
  InsertionAtEnd(tail, 2);
  InsertionAtEnd(tail, 3);
  InsertionAtEnd(tail, 4);

  traverse(head);
  cout<<endl;
  insertAtPosition(head, 6, 12);
  traverse(head);
  cout<<endl;
   deleteNode(head, 7, 1);
  traverse(head);
  cout<<endl;
cout<<getLength(head);
    return 0;
}