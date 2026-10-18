## Algorithm

Start the program.

Input the number of test trees, t.

Repeat the following steps for each test tree:

Input the number of positions, n.

Enter the tree elements in level-order sequence, using -1 for a missing position.

Call the validateTree() function.

Initialize missing = false.

Display the tree elements.

Traverse the positions from left to right.

If an element is -1, set missing = true.

If a non-missing element is found after a missing position, display that the tree is incomplete and print the first violating position. Return from the function.

If no violation is found, display that the tree is complete.

Repeat for the remaining test trees.

Stop the program.
