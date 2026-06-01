#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1002;
constexpr int inf = 1e9 + 10;
using pii = pair<int, int>;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pii> grafo[maxn];
    int dist[maxn];
    bool mark[maxn] = {};

    fill(dist, dist + N, inf);

    for (int i = 0; i < M; ++i) {
        int U, V, P;
        cin >> U >> V >> P;
        --U, --V; // 0-based index
        grafo[U].emplace_back(V, P);
        grafo[V].emplace_back(U, P);
    }

    int S;
    cin >> S;
    --S;

    dist[S] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.emplace(0, S);

    while (!fila.empty()) {
        int u = fila.top().second;
        fila.pop();

        if (mark[u]) continue;
        mark[u] = true;

        for (auto [v, w] : grafo[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                fila.emplace(dist[v], v);
            }
        }
    }

    int menor = inf, maior = 0;
    for (int i = 0; i < N; ++i) {
        if (i == S) continue;
        menor = min(menor, dist[i]);
        maior = max(maior, dist[i]);
    }

    cout << maior - menor;

    return 0;
}
