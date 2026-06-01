#include <bits/stdc++.h>

using namespace std;

const int MAX = 105;

int L, C;

char matrix[MAX][MAX];

bool mark[MAX][MAX];

pair<int, int> actual;

int step(){
    int x = 0;
    pair<int, int> newActual;
    if(matrix[actual.first-1][actual.second]=='H' && !mark[actual.first-1][actual.second]){
        newActual = {actual.first-1, actual.second};
        x=1;
    }   
    if(matrix[actual.first][actual.second-1]=='H' && !mark[actual.first][actual.second-1]){
        newActual = {actual.first, actual.second-1};
        x=1;
    }   
    if(matrix[actual.first+1][actual.second]=='H' && !mark[actual.first+1][actual.second]){
        newActual = {actual.first+1, actual.second};
        x=1;
    }   
    if(matrix[actual.first][actual.second+1]=='H' && !mark[actual.first][actual.second+1]){
        newActual = {actual.first, actual.second+1};
        x=1;
    }   
    mark[newActual.first][newActual.second] = 1;
    if(!x){
        return 0;
    }
    actual = newActual;
    step();

    return 0;
    
}

int main(){
    cin >> L >> C;

    for (int i = 1; i <= L; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cin >> matrix[i][j];
            if(matrix[i][j]=='o'){
                actual = {i, j};
            }
        }
        
    }
    step();
    cout << actual.first << " " << actual.second;
    

    return 0;
}