## Algorithm

Start.

Read the number of tree positions.

Enter the tree elements in level-order sequence, using -1 for a missing node.

Initialize the flag missing to false.

Traverse the positions from left to right.

If a missing node is encountered, set missing = true.

If a node is found after a missing position, display that the tree is not complete and print the first violating position.

If no violation is found, display that the tree is complete.

Stop.

