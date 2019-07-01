#include <iostream>

using namespace std;

int main () {
    int T, n, s, t, aux;

    cin >> T;

    while (T--) {
        cin >> n >> s >> t;


            if (s < t) {
                cout << n - s + 1;
            } else {
                cout << n - t + 1;
            }

        cout << endl;
        
        

    }

    return 0;
}
