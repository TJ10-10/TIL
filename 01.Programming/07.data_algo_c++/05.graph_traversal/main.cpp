#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, const vector<vector<int>>& graph) {
  vector<bool> visited(graph.size(), false);
  queue<int> q;

  visited[start] = true;
  q.push(start);

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    cout << "訪問: " << node << endl;

    for (int neighbor : graph[node]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
}

int main() {

  vector<vector<int>> graph = {
    {1, 2},
    {0, 3},
    {0, 3},
    {1, 2, 4},
    {3}
  };

  bfs(0, graph);
  return 0;
}

