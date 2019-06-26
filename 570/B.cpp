#include <iostream>

using namespace std;

int main () {
	int q, n, k, menor, maior, eq;
	cin >> q;
	
	while (q--) {
		cin >> n >> k;
		menor = 999999999, maior = 0;
		/*cout << n;*/
		for (int i = 0; i < n; i++){
			int aux;
			cin >> aux;
			menor = aux < menor ? aux : menor;
			maior = aux > maior ? aux : maior;
		}
		eq = -1;
		if (maior-k <= menor+k) {
			eq = menor+k;
		}
		
		cout << eq << endl;
	}
	
	return 0;
}
