## Problem Statement

Develop a modified Complete Binary Tree Validation program to check whether a binary tree is complete using an array representation. The program uses -1 for missing nodes and displays the first position where the completeness property is violated.

## Approach

The program stores tree elements in an array and checks them from left to right. Once a missing node (-1) is encountered, it searches for the next existing node. If found, the program displays the first violating position and declares the tree incomplete; otherwise, the tree is complete.

## Complexity Analysis

The program takes (O(n)) time because each array element is checked at most once. The space complexity is (O(n)) for storing the tree elements in an array.

## Conclusion

The modified program validates a complete binary tree and identifies the first position that violates the completeness property. This improvement makes it easier to locate structural errors and understand why a tree is incomplete.
