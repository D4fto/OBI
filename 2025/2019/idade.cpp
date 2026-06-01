#include <bits/stdc++.h>

using namespace std;

int M;
int idades[3];
int main(){
    cin >> M >> idades[0] >> idades[1];
    idades[2] = M - (idades[0] + idades[1]);
    sort(idades, idades+3);
    cout << idades[2];
    return 0;
}