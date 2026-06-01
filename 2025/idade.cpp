#include <bits/stdc++.h>

using namespace std;

int idades[3];
int main(){
    for (int i = 0; i < 3; i++)
    {
        cin >> idades[i];
    }
    sort(idades,idades+3);
    cout << idades[1];
    

    return 0;
}