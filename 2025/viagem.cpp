#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10010;
const int MAXV = 201;

typedef pair<int, int> pii;

int V, N, M, A, B, T, P, X, Y, resp;


vector<pair<int, pii>> grafo[MAXN];
int dist[MAXN][MAXV];
bool visited[MAXN][MAXV];

int main(){
    cin >> V >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> A >> B >> T >> P;
        grafo[A].push_back({B, {T, P}});
        grafo[B].push_back({A, {T, P}});
    }
    cin >> X >> Y;
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXV; j++) {
            dist[i][j] = 1e9;
        }
    }
    dist[X][0] = 0;

    resp = 1000000000;
    
    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> tree;
    tree.push({0, {0, X}});
    while (!tree.empty())
    {
        pair<int, pii> Z = tree.top();
        tree.pop();

        if(visited[Z.second.second][Z.second.first]){
            continue;
        }
        visited[Z.second.second][Z.second.first] = 1;
        for(auto [i, j]:grafo[Z.second.second]){
            if(j.second+Z.second.first>200){
                continue;
            }
            if(dist[i][Z.second.first+j.second]>Z.first+j.first){
                dist[i][Z.second.first+j.second]=Z.first+j.first;
                tree.push({Z.first+j.first, {Z.second.first+j.second, i}});
            }
        }

    }
    for (int i = 0; i <= V; i++)
    {

        if(dist[Y][i]==0){
            continue;
        }
        resp = min(resp, dist[Y][i]);
    }
    if(resp == 1000000000){
        resp = -1;
    }
    cout << resp;
    

    return 0;
}