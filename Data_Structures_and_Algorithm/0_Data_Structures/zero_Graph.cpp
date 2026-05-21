// Modern C++ Graph Code
#include <iostream>
#include <vector>

using namespace std;

//class names graph
class Graph {

    // vector array and variable for graph.
    int vertices;
    vector<vector<int>> adj;

public:

    // constructor for a graph
    Graph(int v) {
        vertices = v;
        adj.resize(v);
    }

    // Add Edge
    void addEdge(int u, int v) {

        // Undirected Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Display Graph
    void display() {

        for(int i = 0; i < vertices; i++) {

            cout << i << " -> ";

            for(int neighbor : adj[i]) {
                cout << neighbor << " ";
            }

            cout << endl;
        }
    }
};

//Weighted Graph

class WeightedGraph {

    int vertices;

    vector<vector<pair<int,int>>> adj;

public:

    WeightedGraph(int v) {
        vertices = v;
        adj.resize(v);
    }

    void addEdge(int u, int v, int weight) {

        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    void display() {

        for(int i = 0; i < vertices; i++) {

            cout << i << " -> ";

            for(auto neighbor : adj[i]) {

                cout << "("
                     << neighbor.first
                     << ", weight="
                     << neighbor.second
                     << ") ";
            }

            cout << endl;
        }
    }
};

int main() {

    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);

    g.display();

    return 0;
}