#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 105;
const int inf = 1001000;

int N, M, A, B, C;

vector<pii> graph[MAXN];

bool mark[MAXN];

int dist[MAXN];

int main(){
    cin >> N >> M;
    for (int i = 0; i < MAXN; i++)
    {
        dist[i] = inf;
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> A >> B >> C;
        graph[A].push_back({B, C});
        graph[B].push_back({A, C});
    }

    priority_queue<pii, vector<pii>, greater<pii>> tree;

    dist[1] = 0;

    tree.push({0,1});

    while (!tree.empty())
    {
        pii V = tree.top();
        tree.pop();

        if(mark[V.second]){
            continue;
        }

        mark[V.second] = 1;

        for(auto [u,p]:graph[V.second]){
            if(dist[u] > V.first + p){
                dist[u] = V.first + p;
                tree.push({dist[u], u});
            }
        }
    }
    // for (int i = 0; i < N+5; i++)
    // {
    //     cout << mark[i];
        
    // }
        
    cout << dist[N];


    return 0;
}