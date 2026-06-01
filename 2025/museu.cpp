#include<iostream>
#include<unordered_map>



using namespace std;

int S, C, I, F, T;
int main(void){
    cin >> S;
    cin >> C;
    unordered_map<int, int> salas;
    int corredores[C][3];
    for(int i = 1; i<=S; i++){
        cin >> salas[i];
    }
    for(int i = 0; i<C; i++){
        cin >> I;
        cin >> F;
        cin >> T;
        corredores[i][0] = I;
        corredores[i][1] = F;
        corredores[i][2] = T;
    }

    
    return 0;
}