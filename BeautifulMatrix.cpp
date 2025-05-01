#include <bits/stdc++.h>
using namespace std;

int main() {
    int res;
    int disa = 1, disb = 2, disc = 3, disd = 4, dise = 5;
    for(int i = 1; i <= 5; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        if(a == 1) {
            res = abs(i - 3) + abs(disa - disc);
        }
        else if(b == 1) {
            res = abs(i - 3) + abs(disb - disc);
        }
        else if(c == 1) {
            res = abs(i - 3);
        }
        else if(d == 1) {
            res = abs(i - 3) + abs(disd - disc);
        }
        else if(e == 1) {
            res = abs(i - 3) + abs(dise - disc);
        }
    }
    cout << res;
}