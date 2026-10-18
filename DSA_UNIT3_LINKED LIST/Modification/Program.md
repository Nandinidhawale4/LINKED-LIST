## Program

#include <iostream>
#include <string>
using namespace std;

struct Node {
    int id;
    string name, author;
    Node *prev, *next;
};

Node* head = NULL;

void insertBook() {
    Node* temp = new Node;

    cout << "Enter Book ID: ";
    cin >> temp->id;
    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, temp->name);

    cout << "Enter Author Name: ";
    getline(cin, temp->author);

    if (head == NULL) {
        head = temp;
        temp->next = temp;
        temp->prev = temp;
    } else {
        Node* last = head->prev;

        temp->next = head;
        temp->prev = last;
        last->next = temp;
        head->prev = temp;
    }

    cout << "Book inserted successfully!\n";
}

void searchBook() {
    if (head == NULL) {
        cout << "Library is empty.\n";
        return;
    }

    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    Node* temp = head;

    do {
        if (temp->id == id) {
            cout << "Book ID: " << temp->id << endl;
            cout << "Book Name: " << temp->name << endl;
            cout << "Author: " << temp->author << endl;
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "Book not found.\n";
}

void displayForward() {
    if (head == NULL) {
        cout << "Library is empty.\n";
        return;
    }

    Node* temp = head;

    do {
        cout << temp->id << " | "
             << temp->name << " | "
             << temp->author << endl;
        temp = temp->next;
    } while (temp != head);
}

void displayBackward() {
    if (head == NULL) {
        cout << "Library is empty.\n";
        return;
    }

    Node* temp = head->prev;

    do {
        cout << temp->id << " | "
             << temp->name << " | "
             << temp->author << endl;
        temp = temp->prev;
    } while (temp != head->prev);
}

void deleteBook() {
    if (head == NULL) {
        cout << "Library is empty.\n";
        return;
    }

    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    Node* temp = head;

    do {
        if (temp->id == id) {
            if (temp->next == temp) {
                head = NULL;
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;

                if (temp == head)
                    head = temp->next;
            }

            delete temp;
            cout << "Book deleted successfully!\n";
            return;
        }

        temp = temp->next;
    } while (temp != head);

    cout << "Book not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Library Book Management ---\n";
        cout << "1. Insert Book\n";
        cout << "2. Search Book\n";
        cout << "3. Display Forward\n";
        cout << "4. Display Backward\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: insertBook(); break;
            case 2: searchBook(); break;
            case 3: displayForward(); break;
            case 4: displayBackward(); break;
            case 5: deleteBook(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}
