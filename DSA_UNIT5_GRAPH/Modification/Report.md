### 1. Problem Statement

Develop a C++ program to represent garden plots as vertices and pathways as edges of a graph. Apply Depth First Search (DFS) from a user-selected starting plot. Modify the program to accept a different starting vertex, display all reachable and unvisited plots, and determine the DFS level of each visited plot.

### 2. Approach

The modified program represents the garden using an undirected graph and an adjacency list. The user enters the number of garden plots, the number of pathways, and the connections between the plots. The user can select any valid starting vertex to perform DFS traversal.

Before traversal begins, the program initializes a visited array to mark all plots as unvisited and a level array to store the DFS level of each plot. The level of every plot is initially set to -1. DFS starts from the selected plot, which is assigned level 0. Whenever a new adjacent plot is visited, its level is assigned as one greater than the level of its parent in the DFS traversal tree.

After completing DFS, the program displays the traversal order and lists all reachable plots along with their respective DFS levels. Finally, it checks the visited array and displays the plots that remain unvisited. This modified approach provides additional information about the connectivity of the garden and the depth at which each reachable plot is visited.

The three modifications are accepting a different starting vertex, displaying reachable and unvisited plots separately, and displaying the DFS level of each visited plot.

### 3. Complexity Analysis

**Time Complexity:** The time complexity is O(V + E), where V is the number of garden plots and E is the number of pathways. Constructing the adjacency list takes O(V + E) time, and performing DFS also takes O(V + E) time. Displaying the traversal order, reachable plots with their DFS levels, and unvisited plots takes O(V) time. Therefore, the overall time complexity is O(V + E).

**Space Complexity:** The space complexity is O(V + E) for storing the adjacency list. The visited array, level array, traversal-order list, and recursive DFS calls require O(V) additional space. Hence, the overall space complexity remains O(V + E).

### 4. Conclusion

The modified program successfully performs DFS traversal from a user-selected starting vertex. It displays the traversal order, identifies reachable and unvisited garden plots, and assigns a DFS level to every visited plot. These modifications make the program more informative and help users understand the connectivity and traversal structure of the garden graph.
