##  Problem Statement

Develop a Library Book Management System using a Singly Linked List to store and manage book details such as Book ID, Book Name, and Author Name. The system should support insertion, searching, displaying, and deletion of book records. It should provide an easy way to manage library records using dynamic memory allocation.

## Approach

The system uses a Singly Linked List in which each node stores the Book ID, Book Name, Author Name, and a pointer to the next node. The program provides a menu-driven interface that allows users to insert new books, search for books using their IDs, display all book records, and delete specific books. The head pointer identifies the first node, and the last node points to NULL. The list grows or shrinks dynamically as books are added or removed.

##  Complexity Analysis

Time Complexity: Insertion at the beginning takes O(1) time because it requires updating only the head pointer. Searching takes O(n) time because each node may need to be checked sequentially to find the required book. Displaying all book records takes O(n) time because every node must be traversed. Deletion takes O(n) time in the worst case because the program may need to search for the book before removing it.

Space Complexity: The space complexity is O(n), where n is the total number of books stored in the linked list. Each book requires a node containing its details and a pointer to the next node. The linked list also supports dynamic memory allocation, allowing book records to be added or removed as required.

Overall Analysis: A Singly Linked List provides efficient insertion at the beginning and flexible memory management. However, searching, displaying, and deleting records may take linear time because the nodes are accessed sequentially.

## Conclusion

The Library Book Management System successfully demonstrates the use of a Singly Linked List to manage book records. It supports insertion, searching, displaying, and deletion of books while allowing dynamic memory allocation. This project helps in understanding linked-list operations and their practical application in library record management.
