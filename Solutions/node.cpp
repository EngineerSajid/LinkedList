#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next_ptr;
};

Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->value = value;
    newNode->next_ptr = nullptr;
    return newNode;
}

void insertNode(Node *&head, int value)
{
    Node *newNode = createNode(value);
    newNode->next_ptr = head;
    head = newNode;
}

void appendNode(Node *&head, int value)
{
    Node *newNode = createNode(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *current = head;
    while (current->next_ptr != nullptr)
    {
        current = current->next_ptr;
    }
    current->next_ptr = newNode;
}

void printLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next_ptr;
    }
    cout << endl;
}

int main()
{
    Node *start_node = nullptr;
    int numNodes;

    cout << "Enter the number of nodes to store: ";
    cin >> numNodes;

    for (int i = 0; i < numNodes; i++)
    {
        int value;
        cout << "Enter a value for node " << i + 1 << ": ";
        cin >> value;
        insertNode(start_node, value);
    }

    // Printing the Linked List
    printLinkedList(start_node);

    return 0;
}
