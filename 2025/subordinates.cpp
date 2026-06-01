#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2*10e5+5;

int N;
vector<int> graph[MAXN];
int dist[MAXN];

int children(int y){
    for(auto v : graph[y]){
        dist[y]+=children(v)+1;
    }
    return dist[y];
}
int main(){
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        int x;
        cin >> x;
        graph[x].push_back(i+1);
    }

    children(1);
    
    // for (int i = 1; i <= N; i++)
    // {
    //     for(auto m : graph[i]){

    //         cout << m << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= N; i++)
    {
        cout << dist[i] << " ";
    }


    
    


    


    return 0;
}