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

##  Complexity Analysis
time Complexity: Insertion at the end takes O(1) time when the last node can be accessed directly through head->prev. Searching takes O(n) time because each node may need to be checked sequentially to find the required book. Displaying all book records in either forward or backward direction takes O(n) time because every node must be traversed. Deletion takes O(n) time in the worst case because the program may need to search for the book before removing it. Once the node is found, deleting it takes O(1) time by updating its previous and next pointers.

Space Complexity: The space complexity is O(n), where n is the total number of books stored in the list. Each node contains book details and two pointers, prev and next, which connect it to the previous and next nodes. The circular connections allow traversal in both directions without requiring additional memory for a separate traversal structure.

Overall Analysis: The Doubly Circular Linked List provides dynamic memory allocation, efficient insertion and deletion after locating a node, and forward and backward traversal. However, searching and displaying book records require linear time. Compared with a Singly Linked List, it provides bidirectional traversal but requires additional memory for the previous pointer.

## Conclusion

The Library Book Management System using a Doubly Circular Linked List successfully demonstrates insertion, searching, deletion, and forward and backward traversal of book records. It helps in understanding circular connections, pointer manipulation, and dynamic memory allocation. This method provides flexible book record management and demonstrates a practical application of a doubly circular linked list.
