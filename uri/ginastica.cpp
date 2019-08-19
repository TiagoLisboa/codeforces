#include <iostream>

using namespace std;

const int biggur = 10e5;
const long long int mo = 10e9 + 7;

long long int t, m, n;
long long int pd[51][biggur+1];

long long int bt (int nextMin, int lastN) {
        if (pd[nextMin][lastN] != -1) return pd[nextMin][lastN];
        if (nextMin == 1) return 1;
        if (lastN == m) return pd[nextMin][lastN] = bt(nextMin-1, lastN+1) % mo;
        if (lastN == n) return pd[nextMin][lastN] = bt(nextMin-1, lastN-1) % mo;

        return pd[nextMin][lastN] = (bt(nextMin-1, lastN+1) + bt(nextMin-1, lastN-1)) % mo;
}

int main () {
        long long int res = 0;
        cin >> t >> m >> n;

        fill(&pd[0][0], &pd[50][biggur], -1);

        for (int i = m; i <= n; i++) {
                res += bt(t, i);
                res %= mo;
        }
        cout << res << endl;
        return 0;
}
