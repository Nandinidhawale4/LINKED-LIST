## Problem Statement
Develop a Library Book Management System using a doubly circular linked list to store Book ID, Book Name, and Author Name. The system supports insertion, searching, displaying, and deleting book records with circular traversal in both directions
.
## Approach
Each node stores the book details and two pointers, prev and next. These pointers maintain circular connections between the first and last nodes. The system performs insertion, searching, deletion, and forward and backward display operations.

## Complexity Analysis
The insertion operation takes O(1)  time. Searching and deletion take O(n)  time in the worst case. Forward and backward display also take O(n)time. The space complexity is O(n) as each book requires a separate node.

## Conclusion
The modified system manages book records using a doubly circular linked list. It supports essential library operations and enables traversal in both directions, making book management more flexible than a singly linked list.
