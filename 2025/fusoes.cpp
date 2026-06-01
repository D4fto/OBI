// Noic - Ideia 5 - UnionFind++
// Union Find "de trás pra frente" - Exemplo 1
// Escrito por Lúcio Figueiredo

#include <bits/stdc++.h>

#define ff first
#define ss second

using namespace std;

const int maxn = 1e5+10;
const int maxq = 1e5+10;

typedef pair<int, int> pii;

int pai[maxn], peso[maxn]; // vetores do union find

int removida[maxq]; // índice das arestas removidas em cada op.
int ans[maxq]; // resposta para cada operação

int cc; // quantidade de componentes conexas

bool fora[maxn]; // diz se a aresta i foi removida ou não

pii edge[maxn]; // arestas do grafo

int Find(int x)
{
	if (pai[x] == x) return x;
	return pai[x] = Find(pai[x]);
}

void Join(int x, int y)
{
	x = Find(x), y = Find(y);

	if (x == y) return;

	cc--; // se x != y, juntamos duas componentes distintas

	if (peso[x] < peso[y]) pai[x] = y;
	else if (peso[x] > peso[y]) pai[y] = x;
	else
	{
		pai[x] = y;
		peso[y]++;
	}
}

int main(void)
{
	int n, m, q;

	cin >> n >> m >> q;

	// inicializando o UF
	cc = n;
	for (int i = 1; i <= n; i++)
		pai[i] = i, peso[i] = 1;

	for (int i = 1; i <= m; i++)
	{
		int u, v;

		cin >> u >> v;

		// aresta de índice i
		edge[i] = {u, v};
	}

	for (int i = 1; i <= q; i++)
	{
		// índice da aresta removida
		int E;

		cin >> E;

		removida[i] = E;
		fora[E] = true;
	}

	for (int i = 1; i <= m; i++)
		if (!fora[i]) 
			Join(edge[i].ff, edge[i].ss); // se a aresta i não foi removida, faz parte do grafo final

	// grafo final representa o grafo após as Q arestas serem removidas
	ans[q] = cc;

	for (int i = q; i > 1; i--)
	{
		int E = removida[i];

		// juntamos a i-ésima aresta removida de volta
		Join(edge[E].ff, edge[E].ss);

		// com isso, temos a resposta para a operação anterior
		ans[i-1] = cc;
	}

	// agora imprimimos as respostas na ordem correta
	for (int i = 1; i <= q; i++)
		cout << ans[i] << "\n";
}