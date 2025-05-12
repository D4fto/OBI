#include <iostream>
using namespace std;

int F, C, E, B;
char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(){
    cin >> F >> C >> E >> B;

    int total_assentos_eco = (F - E + 1) * C;

    if(B > total_assentos_eco){
        cout << "PROXIMO VOO";
    } else {
        int fileira = E + (B - 1) / C;
        char posicao = letras[(B - 1) % C];
        cout << fileira << " " << posicao;
    }

    return 0;
}