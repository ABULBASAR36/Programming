#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; 
vector<int> graph[N];  

// Function to add an edge
void addEdge(int u, int v) 
{
    graph[u].push_back(v);
    graph[v].push_back(u);  
}

// Function to delete an edge
void deleteEdge(int u, int v) 
{

    graph[u].erase(remove(graph[u].begin(), graph[u].end(), v), graph[u].end());


    graph[v].erase(remove(graph[v].begin(), graph[v].end(), u), graph[v].end());
}

// Function to print the graph
void printGraph(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        cout << "Node " << i << ": ";
        for (int neighbor : graph[i])
         {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    for (int i = 0; i < e; i++) 
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }

    cout << "Initial graph:\n";
    printGraph(n);

    // Add a new edge
    int newU, newV;
    cout << "Enter a new edge to add: ";
    cin >> newU >> newV;
    addEdge(newU, newV);

    cout << "Graph after adding edge:\n";
    printGraph(n);

    // Delete an edge
    int delU, delV;
    cout << "Enter an edge to delete: ";
    cin >> delU >> delV;
    deleteEdge(delU, delV);

    cout << "Graph after deleting edge:\n";
    printGraph(n);

    return 0;
}
