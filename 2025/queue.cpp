#include <iostream>
#include <queue>

using namespace std;

queue<int> fila = queue<int>({10, 20, 30, 40, 50});

int main(){
    fila.pop();
    while (!fila.empty())
    {
        cout << fila.front();
        fila.pop();
    }
    




    return 0;
}