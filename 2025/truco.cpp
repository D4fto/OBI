#include<iostream>
#include<unordered_map>
using namespace std;


int N;
int tempPoint;
int rodA=0;
int rodB=0;

unordered_map<int, int> valor_truco = {
    {4, 0}, 
    {5, 1}, 
    {6, 2}, 
    {7, 3},
    {12, 4}, 
    {11, 5}, 
    {13, 6}, 
    {1, 7},  
    {2, 8},
    {3, 9}
};

bool compara(int x, int y){
    return valor_truco[x] >= valor_truco[y];
}
int main(void){
    cin >> N;
    int matriz[N][6];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> matriz[i][j];
        }
        
    }
    for (int i = 0; i < N; i++){
        tempPoint=0;
        for(int j = 0; j<3;j++){
        
           if(compara(matriz[i][j],matriz[i][j+3])){
            tempPoint++;
           }
        }
        if(tempPoint>=2){
            rodA++;
            continue;
        }
        rodB++;
    }
    cout << rodA << " " << rodB;
    return 0;
}