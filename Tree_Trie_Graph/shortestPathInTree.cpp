#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int minimumTreePath(int n, vector<vector<int>> edges, vector<int> visitNodes) {
    // Create an adjacency list to represent the tree
    unordered_map<int, vector<int>> tree;
    for (const vector<int>& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // Create a map to keep track of the visited nodes
    unordered_map<int, bool> visited;
    for (int node : visitNodes) {
        visited[node] = false;
    }

    // Create a queue for BFS
    queue<pair<int, int>> q;  // Node, Path length
    q.push({1, 0});  // Start from node 1 with path length 0

    int minPathLength = -1;

    while (!q.empty()) {
        int currentNode = q.front().first;
        int currentPathLength = q.front().second;
        q.pop();

        // Mark the current node as visited
        visited[currentNode] = true;

        // Check if we have visited all nodes in visitNodes
        bool allVisited = true;
        for (int node : visitNodes) {
            if (!visited[node]) {
                allVisited = false;
                break;
            }
        }

        if (allVisited && currentNode == n) {
            minPathLength = currentPathLength;
            break;  // We found a valid path, exit the loop
        }

        // Explore adjacent nodes
        for (int neighbor : tree[currentNode]) {
            if (!visited[neighbor]) {
                q.push({neighbor, currentPathLength + 1});
            }
        }
    }

    return minPathLength;
}

int main() {
    int n = 6;  // Number of nodes
    vector<vector<int>> edges = {{1, 2}, {1, 3}, {2, 4}, {3, 5}, {5, 6}};
    vector<int> visitNodes = {4, 5, 6};

    int result = minimumTreePath(n, edges, visitNodes);

    if (result != -1) {
        cout << "Shortest path length: " << result << endl;
    } else {
        cout << "No valid path found." << endl;
    }

    return 0;
}