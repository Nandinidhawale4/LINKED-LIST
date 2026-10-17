## Problem Statement

Develop a Library Book Management System using a Doubly Circular Linked List to store and manage book records, including Book ID and Book Name. The system should support insertion, searching, displaying books in forward and backward directions, and deleting book records. The doubly circular linked list allows traversal in both directions, with the last node connected to the first node.

## Approach

The system uses a doubly circular linked list in which each node contains a Book ID, Book Name, a pointer to the previous node (prev), and a pointer to the next node (next).

Insertion: Add a new book and update the previous and next pointers.
Searching: Find a book using its Book ID.
Forward Display: Display all books using the next pointer.
Backward Display: Display all books in reverse order using the prev pointer.
Deletion: Remove a book record and adjust the links.
Circular Connection: Connect the last node to the first node and the first node to the last node.

A menu-driven program allows users to perform these operations.

## Analysis
Insertion: Takes O(1) time when inserting at the end using the circular links.
Searching: Takes O(n) time because each node may need to be checked.
Displaying: Takes O(n) time to display all book records.
Deletion: Takes O(n) time when searching for a book by its ID.
Advantages: Supports forward and backward traversal, allows dynamic memory allocation, and does not require shifting elements.
Limitation: Requires extra memory for two pointers in each node and careful pointer management.

## Conclusion

The Library Book Management System using a Doubly Circular Linked List successfully demonstrates insertion, searching, deletion, and forward and backward traversal of book records. It helps in understanding circular connections, pointer manipulation, and dynamic memory allocation. This method provides flexible book record management and demonstrates a practical application of a doubly circular linked list.
