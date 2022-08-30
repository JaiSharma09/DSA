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
Node * solve(Node *&head, bool& anyChange){
    if(head ==NULL)
    return head;
    Node *temp =head;
    int sum =0;
    while(temp!=NULL){
    sum  = sum + temp->data;
      if (sum==0)
      {
        break;
      }
      temp = temp->next;
    }
    if (sum==0)
    {
        anyChange=true;
        return temp->next;
    }
    head->next=solve(head->next, anyChange);
    return head;
}
Node *zeroSum(Node * &head){
    while (true)
    {
        bool anyChange = false;
        head = solve(head, anyChange);
        if(head ==NULL || anyChange==false)
        break;
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
    Node *first = new Node(4);
    Node *head = first;
    Node *tail = first;
    InsertionAtEnd(tail, 5);
    InsertionAtEnd(tail, 1);
    InsertionAtEnd(tail, -6);
    InsertionAtEnd(tail, -4);
    InsertionAtEnd(tail, 2);
     traverse(head);
     cout<<endl;
  head = zeroSum(head);
  traverse(head);
    return 0;
}