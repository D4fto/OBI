#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAX = 13;

int N, M, matr[MAX][MAX];

pii E, S;

bool lieBox(int x, int y){
    if(matr[x-1][y]==2){
        matr[x-1][y] = 3;
        matr[x][y] = 3;
        return 1;
    }
    if(matr[x-1][y]==2){
        matr[x-1][y] = 3;
        matr[x][y] = 3;
        return 1;
    }
    if(matr[x-1][y]==2){
        matr[x-1][y] = 3;
        matr[x][y] = 3;
        return 1;
    }
    if(matr[x-1][y]==2){
        matr[x-1][y] = 3;
        matr[x][y] = 3;
        return 1;
    }
}

int main(){

    cin >> N >> M >> E.first >> E.second >> S.first >> S.second;

    for (int i = 2; i < N; i+=2)
    {
        for (int j = 2; j < N; j+=2)
        {
            matr[i][j]=2;
        }
    }
    


    return 0;
}