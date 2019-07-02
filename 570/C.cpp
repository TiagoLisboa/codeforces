#include <stdio.h>

using namespace std;

int main () {
	int q, k, n, b, a;

	scanf("%d", &q);

	while (q--) {
		scanf("%d %d %d %d", &k, &n, &a, &b);

		printf("%d %d %d %d\n", k, n, a, b);
		if (k > a*n) {
			printf("%d\n", n);
			continue;
		}

		if (k <= b*n) {
			printf("-1\n");
			continue;
		}

		int l = 0, r = n-1, m;
		printf ("asdfasdf %d %d %d n: %d\n", l, r, m, n);
		int i = 0;
		while (l < r) {
			m = (r - l)/2;
			if (k > (m*b)+((n-m)*a)) {
				l = m+1;
			} else {
				r = m-1;
			}
		}

		printf("%d\n", m);
	}

	return 0;
}
