#include<iostream>
using namespace std;
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head=0;
    int choice;
    while(choice)
    {
        newnode = new node;
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
    temp = head;
    while(temp != 0)
    {
        cout<<temp->data<<",";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}
