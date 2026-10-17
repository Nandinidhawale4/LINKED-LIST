## Problem Statement

Develop a program to validate whether a binary tree is a Complete Binary Tree. A complete binary tree is a tree in which all levels are completely filled except possibly the last level, and the last level has nodes filled from left to right. The program checks the arrangement of nodes and determines whether the given binary tree is complete.

## Approach

The program uses level-order traversal to validate the binary tree.

Input: Accept the binary tree nodes, using -1 to represent a missing node.
Traversal: Visit the nodes level by level from left to right.
Validation: Check whether any node appears after a missing position.
Output: Display whether the given binary tree is complete or incomplete.

## Complexity Analysis

The time and space complexity of the Binary Tree Validation program depend on the number of nodes or positions examined during validation.

Time Complexity: The program uses level-order traversal to check whether the binary tree is complete. Each node or position is examined at most once to identify missing positions and check whether any node appears after a missing position. Therefore, the time complexity is O(n), where n represents the number of nodes or positions examined.

Space Complexity: The space complexity is O(n) when a queue or array is used to store the tree nodes during traversal. In the worst case, additional memory is required to store the nodes or positions being processed.

Overall Analysis: The Binary Tree Validation program efficiently checks whether a binary tree satisfies the properties of a complete binary tree. It uses level-order traversal to identify missing positions and validate the arrangement of nodes. This method provides a systematic way to check tree completeness and understand the structure of binary trees.

## Conclusion


The Binary Tree Validation program determines whether a given binary tree satisfies the properties of a complete binary tree. It uses level-order traversal to check the arrangement of nodes and helps in understanding binary tree structure and validation.
