##  Problem Statement

Develop a Library Book Management System using a Singly Linked List to store and manage book details such as Book ID, Book Name, and Author Name. The system should support insertion, searching, displaying, and deletion of book records. It should provide an easy way to manage library records using dynamic memory allocation.

## Approach

The system uses a Singly Linked List in which each node stores the Book ID, Book Name, Author Name, and a pointer to the next node. The program provides a menu-driven interface that allows users to insert new books, search for books using their IDs, display all book records, and delete specific books. The head pointer identifies the first node, and the last node points to NULL. The list grows or shrinks dynamically as books are added or removed.

## Analysis

The Singly Linked List provides an efficient way to manage book records because memory is allocated dynamically whenever a new node is created. Insertion at the beginning takes O(1) time, while searching and displaying books generally take O(n) time. Deletion takes O(n) time when the program must search for the book first. Unlike arrays, a linked list does not require shifting elements when records are inserted or deleted. However, it supports traversal only in the forward direction, and each node requires extra memory for a pointer.

## Conclusion

The Library Book Management System successfully demonstrates the use of a Singly Linked List to manage book records. It supports insertion, searching, displaying, and deletion of books while allowing dynamic memory allocation. This project helps in understanding linked-list operations and their practical application in library record management.
