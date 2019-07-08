#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct show {
    int p, i, f, o;
};

vector<show> shows;
vector<int> palcos;

int pd[11][86401];
int v = 0;

void incluir(int tabela[], int i, int f, int o) {
    for (; i <= f; i++) {
        tabela[i] = o;
    }
}

void excluir(int tabela[], int i, int f) {
    for (; i <= f; i++) {
        tabela[i] = -1;
    }
}

int bt (int tabela[], int next) {
    if (next <= 0) {
        for (auto p : palcos) {
            if (p == -1) return -66666666;
        }
        v = 1;
        return 0;
    }
    cerr << next << endl;
    show s = shows[next];
    if (pd[s.p][s.i] != -1) {
        cerr << "pd: " << s.p << " " << s.i << " " << pd[s.p][s.i] << endl;
        return pd[s.p][s.i];
    }
    if ((tabela[s.i] == -1 || tabela[s.i+1] == -1) 
    && (tabela[s.f] == -1 || tabela[s.f-1] == -1)) {
        incluir(tabela, s.i, s.f, s.o);
        palcos[s.p]++;
        int v1 = bt(tabela, next-1);
        excluir(tabela, s.i, s.f);
        palcos[s.p]--;
        int v2 = bt(tabela, next-1);
        cerr << "pd2: " << s.p << " " << s.i << " " << pd[s.p][s.i] << endl;
        return pd[s.p][s.i] = s.o + max(v1, v2);
    } else {
        return bt(tabela, next-1);
    }
}

int main () {
    int N, M, i, f, o, h = 0;
    cin >> N;

    for (int p = 0; p < N; p++) {
        palcos.push_back(-1);
        cin >> M;
        while (M--) {
            cin >> i >> f >> o;
            h = max(h, f);
            struct show s = {p, i, f, o};
            shows.push_back(s);
        }
    }

    int tabela[h+10];
    cerr << h << endl;
    fill(tabela, tabela+h+10, -1);
    cerr << "ASDF " << N*h;
    fill(*pd, *pd+11*86401, -1);
    
    int res = bt(tabela, shows.size()-1);

    cout << (v ? res : -1) << endl;

    return 0;
}

