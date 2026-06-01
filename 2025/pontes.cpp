#include <bits/stdc++.h>
using namespace std;

const int maxn = 1012; // N até 1000, +0 e N+1
const int inf = 1e9;

int N, M;
vector<pair<int,int>> adj[maxn]; 
int dist[maxn];
bool visited[maxn];

int main(){

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int S, T, B;
        cin >> S >> T >> B;
        adj[S].push_back({T, B});
        adj[T].push_back({S, B});
    }

    for (int i = 0; i <= N+1; i++) {
        dist[i] = inf;
    }

    dist[0] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> fila;
    fila.push({0, 0});

    while (!fila.empty()) {
        int u = fila.top().second;
        fila.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                fila.push({dist[v], v});
            }
        }
    }

    cout << dist[N+1];
    return 0;
}
