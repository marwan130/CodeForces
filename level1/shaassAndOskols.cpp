#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[110]; 

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        if (x > 1) {
            a[x - 1] += y - 1;
        }
        if (x < n) {
            a[x + 1] += a[x] - y;
        }
        a[x] = 0; 
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] <<endl;
    }

}
