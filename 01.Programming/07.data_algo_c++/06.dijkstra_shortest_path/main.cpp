#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(int start, const vector<vector<pair<int, int>>>& graph) {
  int n = graph.size();
  vector<int> dist(n, INF);
  dist[start] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, start});

  while (!pq.empty()) {
    auto [d, u] = pq.top(); pq.pop();
    if (d > dist[u]) continue;

    for (auto [v, cost] : graph[u]) {
      if (dist[v] > dist[u] + cost) {
          dist[v] = dist[u] + cost;
          pq.push({dist[v], v});
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    cout << "Node " << i << ": ";
    if (dist[i] == INF) cout << "Unreachable\n";
    else cout << "Distance = " << dist[i] << "\n";
  }
}

int main() {
  int n = 5;
  vector<vector<pair<int, int>>> graph(n);

  graph[0].push_back({1, 2});
  graph[0].push_back({2, 4});
  graph[1].push_back({2, 1});
  graph[1].push_back({3, 7});
  graph[2].push_back({4, 3});
  graph[3].push_back({4, 1});

  dijkstra(0, graph);
  return 0;
}
