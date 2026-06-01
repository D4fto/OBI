#include <bits/stdc++.h>

using namespace std;

const int MAXS = 1010;

int S, T, X, Y, P, N, C, validos; 

bool adj[MAXS][MAXS];

int main(){
    cin >> S >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        adj[X][Y] = 1;
        adj[Y][X] = 1;
    }
    cin >> P;
    for (int i = 0; i < P; i++)
    {
        int ult;
        bool ok = true;
        cin >> N;
        cin >> ult;
        for (int j = 1; j < N; j++)
        {
            cin >> C;
            if(!adj[ult][C]){
                ok = 0;
            }
            ult = C;
        }
        if(ok){
            validos++;
        }
        
    }
    cout << validos;
    

    

    return 0;
}