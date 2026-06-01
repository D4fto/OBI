#include<iostream>
using namespace std;

int L, C, M, N;

int main(void) {
  int max = 0;
  cin >> L >> C >> M >> N;
  int matriz[L+2][C+2];
  int acumulado[L+2][C+2];
  for(int i = 1; i <= L; i++){
    for(int j = 1; j <= C; j++){
      cin >> matriz[i][j];
    }
  }
  for(int i = 0; i <= L; i++){
    acumulado[i][0] = 0;
    acumulado[0][i] = 0;
  }
  for(int i = 1; i <= L; i++){
    for(int j = 1; j <= C; j++){
      acumulado[i][j] = acumulado[i-1][j] + acumulado[i][j-1]- acumulado[i-1][j-1] + matriz[i][j];
    }
  }


  for (int i = M; i <= L; i++) {
    for (int j = N; j <= C; j++) {
      int ponto = acumulado[i][j] - acumulado[i - M][j] - acumulado[i][j - N] + acumulado[i - M][j - N];
      if (ponto > max) {
        max = ponto;
      }
    }
  }

  int x;
  cout << max << endl;



  return 0;
}