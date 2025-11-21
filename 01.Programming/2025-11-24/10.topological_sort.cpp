// 10.topological_sort/topo_sort.cpp
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void topologicalSort(int V, vector<vector<int>>& adj) {
    vector<int> inDegree(V, 0);
    for (auto& edges : adj)
        for (int v : edges)
            inDegree[v]++;

    queue<int> q;
    for (int i = 0; i < V; ++i)
        if (inDegree[i] == 0) q.push(i);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (--inDegree[v] == 0)
                q.push(v);
        }
    }
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);
    adj[5] = {2, 0};
    adj[4] = {0, 1};
    adj[2] = {3};
    adj[3] = {1};

    cout << "Topological Sort: ";
    topologicalSort(V, adj);
    cout << endl;
}

