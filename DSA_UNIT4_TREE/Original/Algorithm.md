## Algorithm

Start the program.

Read the number of positions in the binary tree.

Enter the tree elements in level-order sequence, using -1 to represent a missing node.

Initialize a flag missing to false.

Traverse the tree positions from left to right.

If a missing position is encountered, set missing = true.

If a non-missing node is found after a missing position, mark the tree as incomplete and display the first violating position.

If no violation is found, display that the tree is complete.

Stop the program.
