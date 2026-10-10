
1. Problem Statement
Develop a Library Book Management System using a singly linked list to maintain library book records. The system should allow the user to insert new book records, search for a particular book, and display all available books.

2. Objective
To implement a singly linked list in C++.
To store library book records dynamically.
To insert new books into the list.
To search for a book using its ID.
To display all available books.

3. Algorithm
Step 1: Start.
Step 2: Create a node containing Book ID, Book Name and Author Name.
Step 3: Insert the book node into the singly linked list.
Step 4: For searching, accept the Book ID from the user.
Step 5: Traverse the linked list and compare the Book ID.
Step 6: If the ID matches, display the book details; otherwise display "Book not found".
Step 7: Traverse the list and display all book records.
Step 8: Stop.

Flowchart

             ┌─────────────┐ 
             │    START    │ 
             └──────┬──────┘ 
                    ↓ 
        ┌──────────────────────┐ 
        │ Create/Initialize    │ 
        │ Singly Linked List   │ 
        └──────────┬───────────┘ 
                   ↓ 
          ┌─────────────────┐ 
          │  Display Menu   │ 
          └────────┬────────┘ 
                   ↓ 
          ┌─────────────────┐ 
          │ Select Operation│ 
          └────┬───┬───┬────┘ 
               │   │   │ 
          Insert Search Display 
               │   │   │ 
               ↓   ↓   ↓ 
          ┌────┐ ┌──────┐ ┌─────────┐ 
          │Add │ │Search│ │ Display │ 
          │Book│ │Book  │ │  Books  │ 
          └─┬──┘ └──┬───┘ └────┬────┘ 
            │       │           │ 
            └───────┴───────────┘ 
                    ↓ 
             ┌─────────────┐ 
             │ Continue ?  │ 
             └──────┬──────┘ 
                Yes │  No 
                    ↓ 
              ┌─────┴─────┐ 
              │    STOP   │ 
              └───────────┘

C++ Program

 #include <iostream>
#include <string>
using namespace std;

struct Node
{
    int id;
    string name;
    string author;
    Node* next;
};

Node* head = NULL;

// Insert a new book
void insertBook()
{
    Node* newNode = new Node;

    cout << "Enter Book ID: ";
    cin >> newNode->id;

    cout << "Enter Book Name: ";
    cin >> newNode->name;

    cout << "Enter Author Name: ";
    cin >> newNode->author;

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Book inserted successfully!\n";
}

// Search for a book
void searchBook()
{
    int id;

    cout << "Enter Book ID to search: ";
    cin >> id;

    Node* temp = head;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "\nBook Found!\n";
            cout << "Book ID: " << temp->id << endl;
            cout << "Book Name: " << temp->name << endl;
            cout << "Author: " << temp->author << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Book not found!\n";
}

// Display all books
void displayBooks()
{
    Node* temp = head;

    if (head == NULL)
    {
        cout << "No books available!\n";
        return;
    }

    cout << "\n--- Library Book Records ---\n";

    while (temp != NULL)
    {
        cout << "\nBook ID: " << temp->id << endl;
        cout << "Book Name: " << temp->name << endl;
        cout << "Author: " << temp->author << endl;

        temp = temp->next;
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n===== LIBRARY BOOK MANAGEMENT =====\n";
        cout << "1. Insert Book\n";
        cout << "2. Search Book\n";
        cout << "3. Display All Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input! Please enter a number.\n";
            break;
        }

        switch (choice)
        {
            case 1:
                insertBook();
                break;

            case 2:
                searchBook();
                break;

            case 3:
                displayBooks();
                break;

            case 4:
                cout << "Thank you for using the system!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    // Free allocated memory
    Node* temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

Output

===== LIBRARY BOOK MANAGEMENT =====
1. Insert Book
2. Search Book
3. Display All Books
4. Exit
Enter your choice: 1

Enter Book ID: 101
Enter Book Name: Cpp
Enter Author Name: Bjarne
Book inserted successfully!

===== LIBRARY BOOK MANAGEMENT =====
1. Insert Book
2. Search Book
3. Display All Books
4. Exit
Enter your choice: 3

--- Library Book Records ---

Book ID: 101
Book Name: Cpp
Author: Bjarne

===== LIBRARY BOOK MANAGEMENT =====
1. Insert Book
2. Search Book
3. Display All Books
4. Exit
Enter your choice: 4


   
