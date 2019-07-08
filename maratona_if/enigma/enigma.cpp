#include <stdio.h>

using namespace std;

int main() {
    int a, b, c, d, e, f, idx = 0;
    int res[5] = { 0 };
    scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    for (int i = 1; i <= 5000; i++) {
        int x = 0;
        x += a*i*i*i*i*i;
        x += b*i*i*i*i;
        x += c*i*i*i;
        x += d*i*i;
        x += e*i;
        x += f;
        if (x == 0) res[idx++] = i;
    }
    for (int i = 0; i < idx; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
