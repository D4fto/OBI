// 39min

#include <bits/stdc++.h>

using namespace std;

const int MAX = 35;

int matriz[MAX][MAX], N, M, K, C, L;
char D;
bool visitados[MAX][MAX];

bool visit(int x, int y){
    if(visitados[x][y] || matriz[x][y] == -1){
        return 0; 
    }
    if(x == N && y == M){
        return 1;
    }
    visitados[x][y] = 1;
    for (int i = -1; i <= 1; i+=2)
    {
        
        
        if(visit(x+i, y)){
            return 1;
        }
        if(visit(x, y+i)){
            return 1;
        }
        
    }
    return 0;
}

int main(){

    cin >> M >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        matriz[i][0] = -1;
        matriz[i][M+1] = -1;
    }
    for (int i = 1; i <= M; i++)
    {
        matriz[0][i] = -1;
        matriz[N+1][i] = -1;
    }
    for (int i = 0; i < K; i++)
    {
        cin >> C >> L >> D;
        if(D=='O'){
            for (int i = C; i > 0; i--)
            {
                matriz[L][i]=-1;
            }
        }  
        if(D=='L'){
            for (int i = C; i <= M; i++)
            {
                matriz[L][i]=-1;
            }
        }  
        if(D=='S'){
            for (int i = L; i <= N; i++)
            {
                matriz[i][C]=-1;
            }
        }  
        if(D=='N'){
            for (int i = L; i > 0; i--)
            {
                matriz[i][C]=-1;
            }
        }  
    }
    if(visit(1,1)){
        cout << 'S';
        for (int i = 0; i < MAX; i++)
        {
            for (int j = 0; j < MAX; j++)
            {
                cout << visitados[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
    cout << 'N';
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << visitados[i][j] << " ";
        }
        cout << endl;
    }

    
    
    return 0;
}