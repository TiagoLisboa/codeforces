#include <iostream>
#include <string>
#include <vector>

#define MAX 2 * 10e5


using namespace std;


int main () {
    int n, m, r, f[26], l;
    string s, x;

    cin >> n;
    cin >> s;
    cin >> m;
    cin.ignore();

    vector<int> ss[26];

    for (int i = 0; i < n; i++) {
        ss[s.at(i)-'a'].push_back(i+1);
    }

    /*for (int i = 0; i < 26; i++) {
        if (ss[i].size()) {
            cout << (char)(i+'a') << " ";
            for (auto &a : ss[i]) {
                cout << a << " ";
            }
            cout << endl;
        }
    }*/

    while(m--) {
        l = 0;
        char c;
        fill(f, f+26, 0);
        cin >> x;
        for (int i = 0; i < x.size(); i++) {
            c = x.at(i);
            f[c-'a']++;
            l++;
        }

        /*cout << "---------------------------------\n" << x << endl;

        for (int i = 0; i < 26; i++) {
            if (f[i])
            cout << (char) (i+'a') << " " << f[i] << endl;
        }*/

        r = 0;
        //cout << "TESTE: " << f << endl;
        for (int i = 0; i < 26; i++) {
            if (f[i] != 0) {
               r = ss[i][f[i]-1] > r ? ss[i][f[i]-1] : r;
            }
        }

        cout << r << endl;
    }

    return 0;
}
