## program

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
