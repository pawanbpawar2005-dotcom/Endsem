#include <iostream>
using namespace std;

// Global structure definition
struct node
{
    int data;               // Data of node
    struct node *next;      // Pointer to next node
};

/*
 Singly_Basic():
 Creates a singly linked list and returns head pointer
*/
struct node *Singly_Basic()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        newnode = new node;             // Create new node
        cout << "Enter Data" << ":";
        cin >> newnode->data;
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;      // First node
        }
        else
        {
            temp->next = newnode;       // Link node
            temp = newnode;
        }

        cout << "Do you want to continue" << endl
             << "1>YES" << endl
             << "0>NO" << endl << ":";
        cin >> choice;
    }
    return head;                        // Return head pointer
}

/*
 display():
 Displays all elements of linked list
*/
void display(node* head)
{
    struct node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }
    cout << endl;
}

/*
 Insertion_Beginning():
 Inserts node at the beginning
*/
node *Insertion_Beginning(node *head, int a)
{
    struct node *newnode = new node;
    newnode->data = a;
    newnode->next = head;   // New node points to old head
    head = newnode;         // New node becomes head
    return head;
}

/*
 Insertion_End():
 Inserts node at the end
*/
void Insertion_End(node *head, int a)
{
    struct node *newnode = new node;
    newnode->data = a;
    newnode->next = 0;

    struct node *temp = head;
    while (temp->next != 0) // Traverse till last node
    {
        temp = temp->next;
    }
    temp->next = newnode;  // Attach new node at end
}

/*
 Insertion_User():
 Inserts node at user specified position
*/
void Insertion_User(node *head, int counter, int pos, int a)
{
    struct node *temp, *newnode;

    if (pos > counter)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        newnode = new node;
        temp = head;
        int i = 1;

        // Traverse to required position
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }

        newnode->data = a;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

/*
 counter():
 Counts total number of nodes
*/
int counter(node *head)
{
    int counter = 1;
    struct node *temp = head;

    while (temp->next != 0)
    {
        temp = temp->next;
        counter++;
    }
    return counter;
}

int main()
{
    struct node *head = Singly_Basic(); // Create list

    display(head);

    head = Insertion_Beginning(head, 3); // Insert at beginning
    display(head);

    Insertion_End(head, 4);              // Insert at end
    display(head);

    int count = counter(head);           // Count nodes
    Insertion_User(head, count, 2, 5);   // Insert at position 2
    display(head);

    return 0;
}

