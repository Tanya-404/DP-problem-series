#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d)
    {
        this->data = d;
        this->prev =NULL;
        this->next =NULL;
    }
    ~Node()
    {
        int val = this ->data;
        if(next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for data "<<val <<endl;
    }
};
void print(Node* head)
{
    Node* temp=head;
    cout<<"NULL->";
    while(temp!=NULL)
    {
        cout<< temp->data<<" ->";
        temp = temp->next; 
    }
    cout << "NULL\n";
}
int getLength(Node* head)
{
    int len =0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp = temp->next; 
    }
    return len;
}
void InsertAtBeginning(Node* &head, int d)
{
    if(head==NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        return;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head ->prev =temp;
    head = temp;
}
void InsertAtEnd(Node* head, int d)
{
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    Node* n= new Node(d);
    n->prev = temp;
    temp->next = n;
}
void InsertAtPos(Node* &head, int d, int pos)
{
    if(pos==1)
    {
        InsertAtBeginning(head,d);
        return;
    }
    int i=1;
    Node* temp = head;
    while(i<pos-1)
    {
        temp = temp->next; 
        i++;
    }
    Node* n = new Node(d);
    n->next = temp->next;
    n->prev = temp;
    temp->next = n;
}
void DeleteNode(int pos,Node* &head)
{
    if(pos==1)
    {
        Node* temp = head;
        head = temp -> next;
        temp ->next->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    int i=1;
    while(i<pos)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }
    prev->next =curr->next;
    curr->prev = NULL; 
    curr->next = NULL;
    delete curr;


}
int main(){
    Node* n1 = new Node(10);
    Node* head =n1;
    print(head);
    cout<< getLength(head) <<endl;
    InsertAtBeginning(head,11);
    print(head);
    InsertAtEnd(head,13);
    print(head);
    InsertAtPos(head,14,3);
    print(head);
    DeleteNode(4,head);
    print(head);
    return 0;
}