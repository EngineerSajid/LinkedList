#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *previous;
    Node *next;
};

struct Node *head = nullptr;
void insert(int newdata)
{
    Node *newnode = new Node;
    newnode->data = newdata;
    newnode->previous = nullptr;
    newnode->next = head;
    if (head != nullptr)
    {
        head->previous = newnode;
        head = newnode;
    }
}

void display()
{
    Node *pointer;
    pointer = head;
    while (pointer != nullptr)
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    }
}

int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    cout << "The doubly linked list is: " << endl;
    display();
    return 0;
}