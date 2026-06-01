#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;


#define max 10000
#define maxn 100


int N;

int matriz[maxn][maxn];

vector<pii> grafo[max];

int dist[max];
bool visited[max];



int main(){
    cin >> N;

    for (int i = 0; i < max; i++)
    {
        dist[i] = 1e5+10;
    }
    

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz[i][j];
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i>0){
                grafo[i*N+j].push_back({(i-1)*N+j, matriz[i-1][j]});
            }
            if(j>0){
                grafo[i*N+j].push_back({(i)*N+j-1, matriz[i][j-1]});
            }
            if(i<N-1){
                grafo[i*N+j].push_back({(i+1)*N+j, matriz[i+1][j]});
            }
            if(j<N-1){
                grafo[i*N+j].push_back({(i)*N+j+1, matriz[i][j+1]});
            }
        }
        
    }

    priority_queue<pii, vector<pii>, greater<pii>> fila;

    dist[0]=0;

    fila.push({0,0});

    while (!fila.empty())
    {
        int u = fila.top().second;
        fila.pop();
        if(visited[u]){
            continue;
        }
        visited[u] = 1;
        for(auto V: grafo[u]){
            int v = V.first;
            int w = V.second;

            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                fila.push({dist[v], v});
            }
        }
    }
    cout << dist[N*N-1];



    

    return 0;
}