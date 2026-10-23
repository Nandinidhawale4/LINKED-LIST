### 1. Problem Statement

Develop a C++ program to represent garden plots as vertices and pathways connecting the plots as edges of a graph. Apply Depth First Search (DFS) from a selected starting plot and display the visited plots in traversal order. Identify and display the plots that are not reached during the traversal.

### 2. Approach

The garden is represented using an undirected graph in which each garden plot is considered a vertex and each pathway between two plots is represented by an edge. An adjacency list is used to store the connections between the plots efficiently.

The program accepts the number of plots, the number of pathways, and the connections between the plots from the user. The user then selects a starting plot for DFS traversal. Initially, all plots are marked as unvisited. The DFS algorithm starts from the selected plot, marks it as visited, and explores its adjacent unvisited plots recursively until no further unvisited connected plots remain.

After completing the traversal, the program displays the plots in the order they were visited. It then checks the visited array and displays any plots that remain unvisited. These plots are not reachable from the selected starting plot.

### 3. Complexity Analysis

**Time Complexity:** The time complexity of the program is O(V + E), where V represents the number of vertices (garden plots) and E represents the number of edges (pathways). The DFS algorithm visits each vertex at most once and examines the edges stored in the adjacency list. Checking for unvisited plots requires O(V) time. Therefore, the overall time complexity is O(V + E).

**Space Complexity:** The space complexity is O(V + E) because the adjacency list stores all vertices and edges. The visited array and recursive function calls require additional O(V) space in the worst case. Hence, the overall space complexity is O(V + E).

### 4. Conclusion

The original program successfully represents garden plots and pathways using a graph and performs Depth First Search from a selected starting plot. It displays the DFS traversal order and identifies the plots that remain unvisited. Thus, the program helps determine which garden plots are reachable from the selected starting point.
