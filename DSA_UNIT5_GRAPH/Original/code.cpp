#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool visited[100];

void DFS(int v)
{
    visited[v] = true;
    cout << v << " ";

    for (int u : adj[v]) 
    {
        if (!visited[u])
            DFS(u);
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

    cout << "DFS Traversal: ";
    DFS(start);

    cout << "\nUnvisited plots: ";
    for (int i = 0; i < n; i++)
      {
        if (!visited[i])
            cout << i << " ";
    }

    cout << endl;
    return 0;
}
