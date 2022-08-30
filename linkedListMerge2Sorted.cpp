#include<iostream>
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
Node *solve(Node* &first, Node* &second){
    Node *curr1= first;
    Node *next1= curr1->next;

    Node *curr2=second;
    Node *next2= curr2->next;

   while (next1!=NULL && curr2!=NULL)
   {
    if (curr2->data>=curr1->data && curr2->data<=next1->data)
    {
        curr1->next=curr2;
        next2=curr2->next;
        curr2->next=next1;
        curr1=curr2;
        curr2=next2;
    }
    else{
        curr1=next1;
        next1=next1->next;
        if (next1 ==NULL)
        {
            curr1->next=curr2;
            return first;
        }
    }
   }
   return first;
}
Node *merge(Node *&first, Node *&second){
    if(first==NULL)
    return second;
    if(second==NULL)
    return first;
    if (first->data<=second->data)
    {
        return solve(first, second);
    }

    else
    return solve(second, first);
    
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
    Node *first =new Node(3);
    Node *second = new Node(2);
    Node *head1 =first;
    Node *head2 =second;
    Node *tail1 =first;
    Node *tail2 =second;
    insertionAtEnd(tail1, 4);
    insertionAtEnd(tail1, 6);
    insertionAtEnd(tail1, 8);
    insertionAtEnd(tail2, 5);
    insertionAtEnd(tail2, 9);
    insertionAtEnd(tail2, 9);
    head1 = merge(head1, head2);
    traverse(head1);
    return 0;
}