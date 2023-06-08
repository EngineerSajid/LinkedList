/*
    Md Sajedur Rahman
    ID - 22231203060

*/

// Create a linked list and search a user-given value:

#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

// Function to search a value in a linked list
bool searchValue(Node *head, int target)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->value == target)
        {
            return true;
        }
        current = current->next;
    }
    return false;
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
    node2->value = 5;
    node2->next = nullptr;
    node1->next = node2;

    Node *node3 = new Node;
    node3->value = 60;
    node3->next = nullptr;
    node2->next = node3;

    Node *node4 = new Node;
    node4->value = 70;
    node4->next = nullptr;
    node3->next = node4;

    // Search a user-given value
    int target;
    cout << "Enter the value to search: ";
    cin >> target;

    if (searchValue(head, target))
    {
        cout << "Value found in the linked list." << endl;
    }
    else
    {
        cout << "Value not found in the linked list." << endl;
    }

    return 0;
}
