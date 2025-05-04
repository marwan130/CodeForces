#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int time_one_oven = ((n + k - 1) / k) * t;

    if (d < time_one_oven - t) {
        cout << "YES";
    } 
    else {
        cout << "NO";
    }

}
