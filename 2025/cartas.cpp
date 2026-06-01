#include<iostream>
using namespace std;

int N;
int x=0;
int morto = 0;
int sizeCompras = 0;
int sizeDescarte = 0;
int rodada = 1;
int y=0;
int z = 0;

int main(void){
    cin >> N;
    int compras[N];
    y=N;
    for(int i = 0; i < N; i++){
        cin >> compras[i];
    }
    while (morto<N)
    {
        if(compras[x]==-1){
            x++;
            continue;
        }
        if(x>=y){
            rodada++;
            int temp[y];
            y=0;
            z=0;
            for(int i = 0; i<y; i++){
                if(compras[i]!=1){
                    temp[z]=compras[i];
                    z++;
                    y++;
                }
            }
            for(int i = 0; i<y; i++){
                compras[i]=temp[i];
            }
            x=0;
        }
        if(compras[x]==morto+1){
            morto=compras[x];
            compras[x]=-1;
        }
        x++;
    }
    cout << rodada;

    return 0;
}