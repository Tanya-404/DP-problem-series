#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next =NULL;
    }
    ~Node()
    {
        int val = this ->data;
        if(this-> next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for data "<<val <<endl;
    }
};
int getLength(Node* head)
{
    int i=0;
    while(head->next !=head)i++;
    return i;
}
void InsertAfter(Node* &head, int element,int d)
{
    if(head==NULL)
    {
        Node* temp = new Node(d);
        temp->next = temp;
        head = temp;
        return;
    }
    
    Node* temp = head;
    while(temp->data!=element)
    {
        temp = temp->next;
    }
    Node* n = new Node(d);
    n->next = temp->next;
    temp->next = n;
}
void print(Node* head)
{
    if(head==NULL) 
    {
        cout<<"List is empty";
        return;
    }
    Node* temp = head;
    do
    {
        cout<< head -> data <<" -> ";
        head = head->next;
    }while(head!=temp);
    cout <<endl;
}

void DeleteNode(Node* &head,int val)
{
    if(head==NULL)
    {
        cout<<"list is empty";
        return;
    }

    Node* prev =head;
    Node* temp = prev->next;
    while(temp->data!=val)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    if(temp==prev) head=NULL;
    if(head==temp) head = prev;
    temp->next= NULL;
    delete temp; 

}
int main(){
    // Node* n1 = new Node(10);
    Node* head = NULL;
    InsertAfter(head,5,3);
    print(head);
    InsertAfter(head,3,5);
    print(head);
    InsertAfter(head,5,7);
    print(head);
    InsertAfter(head,7,9); 
    print(head); 
    InsertAfter(head,7,8); 
    print(head);
    DeleteNode(head,5);
    print(head);
    
    return 0;
}