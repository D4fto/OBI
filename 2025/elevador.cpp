#include <bits/stdc++.h>

using namespace std;

int N, P;

vector<int> vet;

bool possivel = true;

int main(){
    cin >> N;

    vet.push_back(0);
    for (int i = 0; i < N; i++)
    {
        cin >> P;
        vet.push_back(P);
    }
    sort(vet.begin(), vet.end());
    
    for (int i = 1; i < vet.size(); i++)
    {
        if(vet[i]-vet[i-1]>8){
            possivel = false;
            break;
        }
    }
    if(possivel){
        cout << "S";
        return 0;
    }
    cout << "N";

    return 0;
}