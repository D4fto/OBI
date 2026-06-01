#include <bits/stdc++.h>


using namespace std;

bool compara(int x, int y){
    if(x>y){
        return true;
    }
    return false;
}

int main(){
    vector<int> v1;
    vector<double> v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(7);
    v1.push_back(3);
    v1.push_back(2);
    sort(v1.begin(), v1.end(), compara);

    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }
    return 0;
}