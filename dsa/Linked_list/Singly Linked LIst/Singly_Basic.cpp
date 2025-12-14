#include <iostream>
using namespace std;

int main()
{
    // Definition of node structure
    struct node
    {
        int data;            // Stores data of node
        struct node *next;   // Pointer to next node
    };

    struct node *head, *newnode, *temp; // Pointers for linked list
    head = 0;                            // Initially list is empty

    int choice = 1;                     // Choice variable to continue loop

    // Loop to create linked list
    while (choice)
    {
        newnode = new node;             // Dynamically allocate memory for new node
        cout << "Enter Data" << ":";
        cin >> newnode->data;           // Store user input in node
        newnode->next = 0;              // New node points to NULL

        // If list is empty
        if (head == 0)
        {
            head = temp = newnode;      // First node becomes head
        }
        else
        {
            temp->next = newnode;       // Link previous node to new node
            temp = newnode;             // Move temp to new node
        }

        // Ask user whether to continue
        cout << "Do you want to continue" << endl
             << "1>YES" << endl
             << "0>NO" << endl << ":";
        cin >> choice;
    }

    // Traversing and displaying linked list
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

