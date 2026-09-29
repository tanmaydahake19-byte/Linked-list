#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class Linkedlist
{
public:
    Node *head;
    Linkedlist()
    {
        head=NULL;
    }
    void add(int value)
    {
        Node *n1=new Node(value);
        if(head==NULL)
        {
            head=n1;
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL)
            {
                temp=temp->next;
            }
        temp->next=n1;
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"\nLinked list is empty.";
            return;
        }
        Node *temp=head;
        while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
        cout<<"NULL";
    }
};

int main()
{
    Linkedlist l1;
    l1.add(2);
    l1.add(4);
    l1.add(45);
    l1.display();
}
