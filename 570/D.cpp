#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main () {
	int q, n, a, qtd, last;
	
	cin >> q;
	
	while (q--) {
		cin >> n;
		int tipos[n];
		memset(tipos, 0, n*sizeof(*tipos));
		for (int i = 0; i < n; i++) {
			int tipo;
			cin >> tipo;
			tipos[tipo]++;
		}
		sort(tipos, tipos+n);

		qtd = 0, last = 0;
		for (int i = 0; i < n; i++) {
			if (tipos[i] > 0 && tipos[i] > last) {
				last = tipos[i];
				qtd += last;
			}
		}

		cout << qtd << endl;

		
	}	

	return 0;
}

