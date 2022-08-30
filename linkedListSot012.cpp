#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertionAtEnd(Node *&tail, int d)
{
    Node *newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
}
Node *sort012(Node *&head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *temp = head;
    while (temp != NULL)
    {
        int value = temp->data;
        if (value == 0)
        {
            insertionAtEnd(zeroTail, 0);
        }
        else if (value == 1)
        {
            insertionAtEnd(oneTail, 1);
        }
        else if (value==2)
        {
           insertionAtEnd(twoTail, 2);
        }
        temp = temp->next;
    }
    if (oneHead->next!=NULL)
    {
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }
    oneTail->next=twoHead->next;
    twoTail->next=NULL;
    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
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
int main()
{
  Node * first = new Node(1);
  Node *head = first;
  Node *tail = first;
  insertionAtEnd(tail, 0);
  insertionAtEnd(tail, 1);
  insertionAtEnd(tail, 2);
  insertionAtEnd(tail, 0);
  insertionAtEnd(tail, 2);
  head = sort012(head);
  traverse(head);
    return 0;
}