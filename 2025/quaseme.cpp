#include <bits/stdc++.h>

using namespace std;

const int MAXN = 502;


const int inf = 1e9+10;

typedef pair<int, int> pii;

int N, M, U, V, P, S, D;
vector<int> results;
int removeEdges(vector<int> paia, int filho, vector<pii> grafo[MAXN], vector<int> pai[MAXN]){
    if(paia.empty()){
        return 0;
    }
    for (size_t j = 0; j < paia.size(); j++)
    {
        for (size_t i = 0; i < grafo[paia[j]].size(); i++)
        {
            if(grafo[paia[j]][i].first == filho){
                grafo[paia[j]][i].first = -1;
                break;
            }
        }
        removeEdges(pai[paia[j]], paia[j], grafo, pai);
    }
    return 0;
}


int main(){
    while (true)
    {
        vector<int> pai[MAXN];
        int dist[MAXN];
        vector<pii> grafo[MAXN];
        bool visted[MAXN];
        cin >> N >> M;
        if(N == 0 && M == 0){
            break;
        }
        cin >> S >> D;
        for (int i = 0; i < M; i++)
        {
            cin >> U >> V >> P;
            grafo[U].push_back({V, P});
        }
        for (int i = 0; i < MAXN; i++)
        {
            dist[i] = inf;
            visted[i] = 0;
        }
        
        
        priority_queue<pii, vector<pii>, greater<pii>> fila;
        fila.push({0, S});
        dist[S] = 0;
        while (!fila.empty())
        {
            int V = fila.top().second;
            fila.pop();
            
            if(visted[V]){
                continue;
            }
            visted[V] = true;
            for(auto [v,p] : grafo[V]){
                if(dist[v] >= dist[V] + p){
                    if(dist[v] > dist[V] + p){
                        pai[v] = {V};
                    }else{
                        pai[v].push_back(V);
                    }
                    dist[v] = dist[V] + p;
                    fila.push({dist[V]+p, v});
                }
            }
        }
    
        removeEdges(pai[D], D, grafo, pai);
        for (int i = 0; i < MAXN; i++)
        {
            dist[i] = inf;
            visted[i] = 0;
        }
        fila.push({0, S});
        dist[S] = 0;
        while (!fila.empty())
        {
            int V = fila.top().second;
            fila.pop();

            if(visted[V]){
                continue;
            }
            visted[V] = true;
            for(auto [v,p] : grafo[V]){
                if(v==-1){
                    continue;
                }
                if(dist[v] > dist[V] + p){
                    dist[v] = dist[V] + p;
                    fila.push({dist[V]+p, v});
                }
            }
        }
        
        
        results.push_back(dist[D]);
        
        
    }





    for (size_t i = 0; i < results.size(); i++)
    {
        if(results[i] == inf){
            cout << -1 << endl;
            continue;
        }
        cout << results[i] << endl;
    }
    


    return 0;
}