## Algorithm

Start the program.

Initialize the head pointer to NULL.

Display the menu containing Insert, Search, Display, Delete, and Exit options.
 
Accept the user's choice.
 
For insertion, create a new node and store the Book ID, Book Name, and Author Name. Update the previous and next pointers to maintain circular connections.

For searching, traverse the list and compare the entered Book ID with each node's Book ID. Display the book details if found

For displaying, traverse the list using next pointers to display records forward and previous pointers to display records backward.
 
For deletion, locate the required Book ID and adjust the previous and next pointers to remove the node while maintaining circular connections.
 
Repeat the menu until the user selects Exit.
 
Stop the program.
