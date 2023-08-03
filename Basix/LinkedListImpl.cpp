#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }
    ~Node()
    {
        int value = this -> data;
        if(this->next !=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout <<"memory is freed for data "<<value <<endl;
    }
};
void InsertAtBeginning(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}
void InsertAtEnd(Node* &head, int d)
{
    Node* temp = head;
    while(temp ->next!=NULL)
    {
       temp = temp->next;
    }
    Node *n =new Node(d);
    temp ->next =n;
    
}
void InsertAtPos(Node* &head, int d,int pos)
{
    if(pos == 1) 
    {
        InsertAtBeginning(head, d);
        return;
    }
    Node* temp = head;
    int i=1;
    while(i<pos-1)
    {
       temp = temp -> next;
        i++;
    }
    Node* n =new Node(d);
    n -> next = temp -> next;
    temp -> next = n;
}
void DeleteNode(int pos,Node* &head)
{
    if(pos==1)
    {
        Node* temp = head;
        head = head -> next;
        temp ->next = NULL;
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
    curr->next = NULL;
    delete curr;


}
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<< temp -> data <<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}


int main(){
    Node* n1 = new Node(10);
    Node* head = n1;
    print(head);
    cout << endl;
    InsertAtBeginning(head,12);
    print(head);
    cout << endl;
    InsertAtBeginning(head,13);
    print(head);
    cout << endl;
    InsertAtEnd(head,15);
    print(head);
    cout << endl;
    InsertAtPos(head,11,4);
    print(head);
    cout << endl;
    DeleteNode(1,head);
    print(head);
    return 0;
}