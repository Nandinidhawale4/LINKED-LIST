#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool visited[100];
int level[100];
vector<int> order;

void DFS(int v, int depth) 
{
    visited[v] = true;
    level[v] = depth;
    order.push_back(v);

    for (int u : adj[v]) 
    {
        if (!visited[u])
            DFS(u, depth + 1);
    }
}

int main()
{
    int n, e, u, v, start;

    cout << "Enter number of plots: ";
    cin >> n;

    cout << "Enter number of pathways: ";
    cin >> e;

    cout << "Enter pathways (u v):\n";

    for (int i = 0; i < e; i++) 
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter starting plot: ";
    cin >> start;

    for (int i = 0; i < n; i++) 
    {
        visited[i] = false;
        level[i] = -1;
    }

    DFS(start, 0);

    cout << "\nDFS Traversal: ";
    for (int x : order)
        cout << x << " ";

    cout << "\nReachable plots and DFS levels:\n";
    for (int x : order)
        cout << "Plot " << x
             << " - Level " << level[x] << endl;

    cout << "Unvisited plots: ";
    bool found = false;

    for (int i = 0; i < n; i++) 
    {
        if (!visited[i])
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << "None";

    cout << endl;
    return 0;
}
