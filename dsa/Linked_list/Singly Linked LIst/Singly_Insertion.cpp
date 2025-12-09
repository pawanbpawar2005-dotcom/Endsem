#include<iostream>
   struct node
    {
        int data;
        struct node *next;
    };
using namespace std;
struct node *Singly_Basic()
{  struct node *head, *newnode, *temp;
    head=0;
    int choice;
    while(choice)
    {
        struct node* newnode = new node;
        cout<<"Enter Data"<<":";
        cin>>newnode->data;
        newnode->next=0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout<<"Do you want to continue"<<endl<<"1>YES"<<endl<<"0>NO"<<endl<<":";
        cin>>choice;
    
    }
    return head;
}
void display(node* head)
{
    struct node *temp;
    temp = head;
    while(temp != 0)
    {
        cout<<temp->data<<",";
        temp = temp->next;
    }
    cout<<endl;
}
 node *Insertion_Beginning(node *head, int a)
{
    struct node *newnode = new node;
    newnode->data = a;
    newnode->next = head;
    head = newnode;
    return head;
}
 void Insertion_End(node *head, int a)
{
    struct node *newnode = new node;
    newnode->data = a;
    newnode->next = 0;
    struct node *temp = head;
    while(temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
 void Insertion_User(node *head, int counter, int pos, int a)
{
    struct node *temp,*newnode;
    if(pos > counter)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        newnode = new node;
        temp = head;
        int i=1;
        while(i < pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->data = a;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int counter(node *head)
{
    int counter = 1;
    struct node *temp = head;
    while(temp->next != 0)
    {
        temp = temp->next;
        counter = counter+1;
    }
    return counter;
}


int main()
{
    struct node *head = Singly_Basic();
    cout<<head<<endl;
    display(head);
    head = Insertion_Beginning(head, 3);
    display(head);
    Insertion_End(head, 4);
    display(head);
    int count = counter(head);
    Insertion_User(head, count, 2, 5);
    display(head);
    return 0;
}
