import sys


L=eval(input(""))
C=eval(input(""))
M=eval(input(""))
N=eval(input(""))
matriz = []
acumulada = []
max = 0

for i in range(L+1):
    matriz.append([])
    acumulada.append([])

for i in range(L+1):
    matriz[i].append(0)
    acumulada[i].append(0)

for i in range(C):
    matriz[0].append(0)
    acumulada[0].append(0)
for i in range(1,L+1):
    for j in range(1,C+1):
        matriz[i].append(eval(input("")))
        acumulada[i].append(0)

for i in range(1,L+1):
    for j in range(1,C+1):
        acumulada[i][j] = acumulada[i-1][j] + acumulada[i][j-1] - acumulada[i-1][j-1] + matriz[i][j]
for i in range(M,L+1):
    for j in range(N,C+1):
        pontos = acumulada[i][j] - acumulada[i-M][j] - acumulada[i][j-N] + acumulada[i-M][j-N]
        if(pontos>max):
            max = pontos
print(max)

sys.exit(0)  