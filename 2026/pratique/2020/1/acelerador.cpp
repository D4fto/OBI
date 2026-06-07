#include <bits/stdc++.h>

using namespace std;

int D;
const int C = 8;
const int d1 = 3;
const int d2 = 2;


int main(){

  cin >> D;

  cout << (D - d1 - d2) % C;


  return 0;
}