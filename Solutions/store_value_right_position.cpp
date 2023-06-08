/*
    Md Sajedur Rahman
    ID - 22231203060

*/

//  Create a linked list and search a user-given value:
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

// Function to insert a value in a sorted linked list
void insertValue(Node *&head, int newValue)
{
    Node *newNode = new Node;
    newNode->value = newValue;
    newNode->next = nullptr;

    if (head == nullptr || head->value >= newValue)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr && current->next->value < newValue)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    // Create the linked list
    Node *node1 = new Node;
    node1->value = 10;
    node1->next = nullptr;
    head = node1;

    Node *node2 = new Node;
    node2->value = 30;
    node2->next = nullptr;
    node1->next = node2;

    Node *node3 = new Node;
    node3->value = 50;
    node3->next = nullptr;
    node2->next = node3;

    // Insert a user-given value
    int newValue;
    cout << "Enter the value to insert: ";
    cin >> newValue;

    insertValue(head, newValue);

    // Print the updated linked list
    cout << "Updated linked list: ";
    printList(head);

    return 0;
}
