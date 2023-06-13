A single node of linked list

two part have acutually
first part -> Data Part
second part -> Pointer Part

A node can be declared / defined using cooe as follows:

struct node {
int data;
node \*pointer;

}

Graphical Representation of single node linked list

in this case, we have one external pointer which occurs the first node memory address and at the end of the linked list we need to put null pointer. which indicates that the pointer is null and our linked list is terminate here.

storing data in a node

1. Node declaration:
   struct node {
   int data;
   node \*next;
   }
2. Storing Data:
   node \*new_pointer; // declare a pointer variable
   new_pointer = new Node; // alloocate space in memory
   new_pointer->data = 23; // insert data to data part
   new_pointer->next = nullptr; // assign null to pointer part

Create a new node

1. node declaration
   struct node {
   int data;
   node \*pointer
   }

2. declare variable (pointer type ) that point to the node:
   node \*new_pointer;
3. Allocate memory for new node:
   new_pointer = new node;

4. Enter value:
   new_pointer -> data = item; // item is a variable
   new_pointer -> next = null;

A linked list creation precess

1. create an empty linked list

That means, the external pointer will null

2. create a new node

   the data part of the new node will contain data informatioin and the pointer part will contain null

Problem 5.1:
Find out the item 51 from above linked list. All items in the list were sored in ascending order.

to locate the node we have to traverse the list using pointer.
(a) we have to use a temporary pointer to traverse the list.
(b) At each node we shall compare and check wheter we have found the node or not.

// Define a variable (item) and pointer (temporary_pointer)
// Input the value to be located:
// Search tyhe item:
temporary_pointer = list;

    while (temporary_pointer-> data != item && temporary_pointer -> next != nullptr){
        temporary_pointer = temporary_pointer -> next;

    }

// Output:
if (temporary_pointer -> data == item){
cout << "Foound" << endl;
}else{
cout << "Not Found" << endl;
}

// Insert item into a linked list

step 1:
input lisked list (we have to use and existing list)

step 2:
Declare pointers (list, tptr, nptr)

step 3:
nptr = new node
nptr -> data = item;
nptr -> next = nullptr;

step 4:
Locatre the appropriate position for the new node
while (tptr-> data < nptr -> data){
tpptr = tptr;
tptr = tptr  
}

step 5:
insert the new nod e4at appropriate position (by linking previous and next node);

nptr -> next = tpptr -> next;
tpptr -> next = nptr;

step 6:
Output : update linked list

Delete a node from a linked list

to delete paritcular node from a linked list, Three major task to be performed

1. Find out or search the node to be deleted.
2. Establish the necessary link
3. Delete the node.

step 1:
use a tempoarary pointer and assign it the value of the external node (tptr = list)

step 2:
Compare the value of the node pointed by the temporary pointer and the valude of the node to be deleted.

step 3:
if the first node is the target node, then we found the node . Otherwise,
step 4:
Assign the value of the temporary pointer to another pointer or save the value (pptr = tptr)
step 5:
Traverse the temporary node until we locate or find the nde (tptr = tptr -> next).

Doubly Linked list:

A doubly or two way linked list is a list where each nod ehas three parts

- One is link or pointer to the previous (backward) node and
- One is data part to hold the data and
- Another is link or pointer to the following (forward) node.

there is an external pointer to the first node of the list. it is also called two-way linked list

Comparison of operations using array and linked list

array:

1. Element access is fast if index is known
2. Insertion and deletion operations are slow
3. Element search is slow

linked list:

1. Element access is slow
2. Insertion and deletion operations are fast
3. Element search is slow
