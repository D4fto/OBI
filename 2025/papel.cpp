// Papel – F2P2 – OBI 2017
// Bia Cunha
// Complexidade: O(nlog)

#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

int n;
int h;
vector<int> retangulos;
vector<pair<int, int>> m;
// map<int, int> ::iterator it;

int main(){
	//lê a quantidade de retângulos
	scanf("%d", &n);
	
	//adiciona 0 no início
	retangulos.push_back(0);

	for(int i=0; i<n; i++){
		//lê novo retângulo
		scanf("%d", &h);
		
		//se ele é diferente
		if(h != retangulos.back()) retangulos.push_back(h);
	}
	
	//adiciona 0 no final
	retangulos.push_back(0);
 
	for(int i=1; i<retangulos.size()-1; i++){
		//se o retângulo i é um pico, ou seja, maior que o anterior e que o seguinte,
		if(retangulos[i] > retangulos[i-1] && retangulos[i] > retangulos[i+1])
			//salva em pv como pico (-1)
			m.push_back( make_pair(retangulos[i], -1) );
		
		//se o retângulo i é um vale, ou seja, maior que o anterior e que o seguinte,
		if(retangulos[i] < retangulos[i-1] && retangulos[i] < retangulos[i+1])
			//salva em pv como vale (+1)
			m.push_back( make_pair(retangulos[i], 1) );
	}
	
	//qtd começa como 2
	int qtd, resp;
	qtd=resp=2;
	sort(m.begin(), m.end());

	for (size_t i = 0; i < m.size(); i++)
	{
		qtd+=m[i].second;
		resp=max(resp, qtd);
	}
	
	//imprime a resposta
	printf("%d\n", resp);
}
