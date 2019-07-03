// questão 2785 uri - piramide

#include <stdio.h>
#include <algorithm>

using namespace std;

int pesos[101][101];
int pd[101][101];

int cal_peso(int n, int e, int d) {
        int soma = 0;
        for (int i = e; i < d; i++) {
                soma += pesos[n][i];
        }
        return soma;
}


int bt (int next, int e, int d) {
        if (next < 0) return 0;
        if (pd[e][d] != -1) return pd[e][d];
        else {
                int peso = cal_peso(next, e, d);
                int p1 = bt(next-1, e, d-1);
                int p2 = bt(next-1, e+1, d);
                return pd[e][d] = peso+min(p1, p2);
        }
}


int main () {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        scanf("%d", &pesos[i][j]);
                }
        }

        fill(*pd, *pd+101*101, -1);

        int res = bt(n-1, 0, n);

        for (int i = 0; i < n+1; i++) {
                for (int j = 0; j < n+1; j++) {
                        fprintf(stderr, "%d ", pd[i][j]);
                }
                fprintf(stderr, "\n");
        }

        printf("%d\n", res);
}
