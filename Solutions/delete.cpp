/*
    Md Sajedur Rahman
    ID - 22231203060

*/

// Create a linked list and delete a user-given value from the list:

#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

// Function to delete a value from a linked list
void deleteValue(Node *&head, int target)
{
    if (head == nullptr)
    {
        return;
    }

    if (head->value == target)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->value != target)
    {
        current = current->next;
    }

    if (current->next != nullptr)
    {
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
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

    // Delete a user-given value
    int target;
    cout << "Enter the value to delete: ";
    cin >> target;

    deleteValue(head, target);

    // Print the updated linked list
    cout << "Updated linked list: ";
    printList(head);

    return 0;
}
