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
int kTHNode(Node *&head, int k){
    if(head ==NULL)
    return 0;
     
    int count =kTHNode(head->next, k)+1;
    if(count==k)
    cout<<"The kth node from end is "<<head->data;
    return count;
}
int main(){
    Node *first = new Node(4);
    Node *head = first;
    Node *tail = first;
    InsertionAtEnd(tail, 3);
    InsertionAtEnd(tail, 1);
    InsertionAtEnd(tail, 5);
    InsertionAtEnd(tail, 8);
    InsertionAtEnd(tail, 2);
    kTHNode(head, 2);
    return 0;
}